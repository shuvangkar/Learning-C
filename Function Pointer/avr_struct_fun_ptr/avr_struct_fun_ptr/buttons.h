/*
 * buttons.h
 *
 * Created: 6/12/2020 2:47:29 PM
 *  Author: Shuvangkar
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_

#include <stdint.h>


#define PRESSED 0 //button is active low


typedef void (*button_handler_t)(void); //function pointer for button handler which will be provided by caller. 

/*
 * struct to define a button, typedef'd to type button_t
 *
 * - define's the GPIO port and pin the button is attached to
 * - stores the current and last button states (pressed / released)
 * - contains the handler functions for each state
 */
typedef struct button {
    volatile uint8_t *port;		///PORTx register pointer
    uint8_t pin;				///button pin number
    uint8_t state;				///current button state
    uint8_t laststate;			///previous button state
    button_handler_t press;		///button pressed handler function which will provided by user.(can be NULL)
    button_handler_t release;	///handler function for button release. can be NULL
} button_t;


void buttons_init(button_t *data, uint8_t count); ///button initialize function

void buttons_poll(void); //read all button states and calls their handlers if state has changed



#endif /* BUTTONS_H_ */