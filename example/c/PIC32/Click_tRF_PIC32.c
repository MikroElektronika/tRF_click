/*
Example for tRF Click

    Date          : apr 2018.
    Author        : Katarina Perendic

Test configuration PIC32 :
    
    MCU                : P32MX795F512L
    Dev. Board         : EasyPIC Fusion v7
    PIC32 Compiler ver : v4.0.0.0

---
Description :

The application is composed of three sections :

- System Initialization - Intializes UART module
- Application Initialization - Driver intialization
- Application Task - (code snippet) - Checks if new data byte have received in rx buffer (ready for reading),
  and if ready than reads one byte from rx buffer. In second case aplication task writes
  message data via UART.

*/

#include "Click_tRF_types.h"
#include "Click_tRF_config.h"

const uint8_t MESSAGE_DATA[9] = { 'M', 'i', 'k', 'r', 'o', 'E', 13, 10, 0 };

void systemInit()
{
    mikrobus_uartInit( _MIKROBUS1, &_TRF_UART_CFG[0] );
    mikrobus_logInit( _LOG_USBUART_B, 19200 );

    Delay_ms( 100 );
}

void applicationInit()
{
    trf_uartDriverInit( (T_TRF_P)&_MIKROBUS1_GPIO, (T_TRF_P)&_MIKROBUS1_UART );
    mikrobus_logWrite( "Initialized", _LOG_LINE );
    Delay_ms( 100 );
}

void applicationTask()
{
    char tmp;
    uint8_t rdyFlag;

// RECEIVER - UART polling

   rdyFlag = trf_byteReady();

    if (1 == rdyFlag)
    {
        tmp = trf_readByte();
        mikrobus_logWrite( &tmp, _LOG_BYTE );
    }

// TRANSMITER - TX each 2 sec

   /*for (tmp = 0; tmp < 9; tmp++)
    {
        trf_writeByte( MESSAGE_DATA[tmp] );
        mikrobus_logWrite( "MESSAGE SENT", _LOG_LINE );
    }

    Delay_ms(2000);*/

}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}