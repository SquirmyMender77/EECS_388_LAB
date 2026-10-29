/******************************************************************************
 *   Header Includes
 *******************************************************************************/
#include <Arduino.h>

#include "eecs_388_lib2.h"

/******************************************************************************
 *   Function: setup() - Initializes the Arduino System
 *      Pre condition: 
 *          Hardware must be properly connected (LEDS, RX/TX from arduino1)
 *      Post condition: 
 *          Runs initialization calls one time on power up
 *			UART is initialized
 *          Input/Output (IO) pins are configured for LEDs
 *******************************************************************************/
void setup() 
{
uart_init();
gpio_mode(GPIO_13, GPIO_OUTPUT); 
gpio_mode(GPIO_12, GPIO_OUTPUT); 
gpio_mode(GPIO_11, GPIO_OUTPUT); 

return;
}

/******************************************************************************
 *   Function: loop() - Main execution loop
 *      Pre condition: 
 *          setup() has been executed and system is initialized
 *      Post condition: 
 *          Performs a single iteration of the system's function
 *          Repeates indefinetely unless the board is reset or powered off
 *******************************************************************************/
void loop() 
{
char char_rcvd;

    char_rcvd = ser_read();

    if (char_rcvd == 'r')
    {
        gpio_write(GPIO_13, ON);
        gpio_write(GPIO_12, OFF);
        gpio_write(GPIO_11, OFF);
        ser_write('A');
    }

    if (char_rcvd == 'g')
    {
        gpio_write(GPIO_13, OFF);
        gpio_write(GPIO_12, ON);
        gpio_write(GPIO_11, OFF);
        ser_write('A');
    }

    if (char_rcvd == 'b')
    {
        gpio_write(GPIO_13, OFF);
        gpio_write(GPIO_12, OFF);
        gpio_write(GPIO_11, ON);
        ser_write('A');
    }

//Task 1.2 - Receive a character from the arduino1_sender, light up the 
//appropriate LED, and send the acknowldegment "A" character back.


return;
}