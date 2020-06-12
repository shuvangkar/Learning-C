/*
 * buttons.c
 *
 * Created: 6/12/2020 2:46:48 PM
 *  Author: Shuvangkar
 */ 
#include "buttons.h"

/* reference to the user-defined button setup */
static button_t *buttons;				///button pointer
/* number of entries in the array referenced by buttons */
static uint8_t button_count;			///buttons pointer array count. 

static uint8_t read_state(uint8_t);


void buttons_init(button_t *data, uint8_t count)
{
    

    buttons = data;			//buttons copy the user defined memory pointer
    button_count = count;	//user button counter

    /* read and store each button's current state */
	uint8_t i;
    for (i = 0; i < button_count; i++) 
	{
        buttons[i].state = read_state(i);
		//or (buttons+i)->state = read_state(i);
    }
}

void buttons_poll(void)
{
    button_t *button; //local pointer for buttons[] array from user. 
	
	uint8_t i;
    for (i = 0; i < button_count; i++) 
	{
        /*
         * pointer to current array element for easier handling.
         * lets us use button->foo instead of buttons[i].foo
         */
        button = &buttons[i];
        
       
        button->laststate = button->state;	 /// copy last state 
        button->state = read_state(i);		//// read and store new state 
        /* check if state has changed */
        if (button->state != button->laststate) 
		{
           
            if (button->state == PRESSED) 
			{
                /* check if we have a press handler. if no handler, it will be null */
                if (button->press) 
				{
                    /* yes, execute it */
                    button->press();
				 }

          /* must be "button released" then */
         }
		 else 
		 {
                /* check if we have a release handler */
                if (button->release) 
				{
                    /* yes, execute it */
                    button->release();
                }
            }
        }
    }
}


/*
 * read the value from the GPIO port
 * see #define PRESSED in buttons.h if values seem inverted
 */
uint8_t read_state(uint8_t index)
{
    /*
     * add debounce functionality here if needed
     * or add debounce function user can set, which is then called here
     */
	
	/*
	button[index] is a variable. as port is a pointer.
	*buttons[index].port is dereferencing it. 
	Think PINX value is 0b10101000;
	0b10101000 >> 3 = 0b10101
	Than  0b10101 & 0x01 = 0x01
	*/
    return (*buttons[index].port >> buttons[index].pin) & 0x01;
}