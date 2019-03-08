![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# tRF Click

---

- **CIC Prefix**  : TRF
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : apr 2018.

---

### Software Support

We provide a library for the tRF Click on our [LibStock](https://libstock.mikroe.com/projects/view/969/trf-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Initializes and defines UART bus driver, and defines driver's functions for comunication (reading and writing) between tRF clicks.

Key functions :

- ``` void trf_writeByte(uint8_t input) ``` - Function writes (sends) one byte in UART rx buffer
- ``` uint8_t trf_readByte() ``` - Function reads (receives) one byte from UART rx buffer
- ``` uint8_t trf_byteReady() ``` - Function checks state of rx buffer (is new data placed in)
- ``` void trf_reset() ``` - Function resets click and sets back in normal operating mode

**Examples Description**

The application is composed of three sections :

- System Initialization - Intializes UART module
- Application Initialization - Driver intialization
- Application Task - (code snippet) - Checks if new data byte have received in rx buffer (ready for reading),
  and if ready than reads one byte from rx buffer. In second case aplication task writes
  message data via UART.


```.c
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
        Delay_100ms();
    }
    Delay_ms(2000);*/
}
```

${EXAMPLE_ADDITIONAL_FUNCTIONS}

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/969/trf-click) page.

Other mikroE Libraries used in the example:

- Conversions
- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
