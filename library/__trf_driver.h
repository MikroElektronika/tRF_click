/*
    __trf_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __trf_driver.h
@brief    tRF Driver
@mainpage tRF Click
@{

@image html sch.jpg

@}

@defgroup   TRF
@brief      tRF Click Driver
@{

| Global Library Prefix | **TRF** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **apr 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _TRF_H_
#define _TRF_H_

/** 
 * @macro T_TRF_P
 * @brief Driver Abstract type 
 */
#define T_TRF_P    const uint8_t*

/** @defgroup TRF_COMPILE Compilation Config */              /** @{ */

//  #define   __TRF_DRV_SPI__                            /**<     @macro __TRF_DRV_SPI__  @brief SPI driver selector */
//  #define   __TRF_DRV_I2C__                            /**<     @macro __TRF_DRV_I2C__  @brief I2C driver selector */                                          
  #define   __TRF_DRV_UART__                           /**<     @macro __TRF_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup TRF_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup TRF_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup TRF_INIT Driver Initialization */              /** @{ */

#ifdef   __TRF_DRV_SPI__
void trf_spiDriverInit(T_TRF_P gpioObj, T_TRF_P spiObj);
#endif
#ifdef   __TRF_DRV_I2C__
void trf_i2cDriverInit(T_TRF_P gpioObj, T_TRF_P i2cObj, uint8_t slave);
#endif
#ifdef   __TRF_DRV_UART__
void trf_uartDriverInit(T_TRF_P gpioObj, T_TRF_P uartObj);
#endif
                                                                       /** @} */
/** @defgroup TRF_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Write Single Byte
 *
 * @param[in] input 
 *
 * Writes sinle byte.
 */
void trf_writeByte(uint8_t input);

/**
 * @brief Read Single Byte
 *
 * @return received byte
 *
 * Read received byte.
 */
uint8_t trf_readByte();

/**
 * @brief Check for new byte received
 *
 * @retval 0 - no new data / 1 - data ready
 *
 * Checks is there a new byte received.
 */
uint8_t trf_byteReady();
                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_tRF_STM.c
    @example Click_tRF_TIVA.c
    @example Click_tRF_CEC.c
    @example Click_tRF_KINETIS.c
    @example Click_tRF_MSP.c
    @example Click_tRF_PIC.c
    @example Click_tRF_PIC32.c
    @example Click_tRF_DSPIC.c
    @example Click_tRF_AVR.c
    @example Click_tRF_FT90x.c
    @example Click_tRF_STM.mbas
    @example Click_tRF_TIVA.mbas
    @example Click_tRF_CEC.mbas
    @example Click_tRF_KINETIS.mbas
    @example Click_tRF_MSP.mbas
    @example Click_tRF_PIC.mbas
    @example Click_tRF_PIC32.mbas
    @example Click_tRF_DSPIC.mbas
    @example Click_tRF_AVR.mbas
    @example Click_tRF_FT90x.mbas
    @example Click_tRF_STM.mpas
    @example Click_tRF_TIVA.mpas
    @example Click_tRF_CEC.mpas
    @example Click_tRF_KINETIS.mpas
    @example Click_tRF_MSP.mpas
    @example Click_tRF_PIC.mpas
    @example Click_tRF_PIC32.mpas
    @example Click_tRF_DSPIC.mpas
    @example Click_tRF_AVR.mpas
    @example Click_tRF_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __trf_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */

