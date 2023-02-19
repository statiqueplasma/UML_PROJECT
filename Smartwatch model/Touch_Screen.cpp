/**
 * Project Smartwatch
 */


#include "Touch_Screen.h"
// Touch_Screen implementation
// The Touch_Screen class is responsible for capturing user touch input and translating it into
// motion events that can be processed by the smartwatch system.


/**
 * @return Touch_input
 */

Motion_type Touch_Screen::get_input() {
    // Declare variables
    Motion_type input;
    static int init_pos[] = {-1,-1};
    int treshold = 100;
    int new_pos[2];

    // Check if screen is being touched
    if(is_pressed){
        // Check if this is the first touch event in a new sequence
        if (init_pos[0] == -1 && init_pos[1]==-1){
            init_pos[0] = touch_pos[0];
            init_pos[1] = touch_pos[1];
        }
        // Otherwise, determine the type of motion event based on touch position and threshold values
        else{
            new_pos[0] = touch_pos[0];
            new_pos[1] = touch_pos[1];
            if (new_pos - init_pos >= treshold) input = SLIDE_RIGHT;
            else if (init_pos - new_pos>= treshold) input = SLIDE_LEFT;
            else input = PRESS;
            // Reset the initial touch position to -1,-1
            init_pos[0] = -1;
            init_pos[1] = -1; 
            return input;
        }
    }
    // If screen is not being touched, return IDLE
    return IDLE;     
}