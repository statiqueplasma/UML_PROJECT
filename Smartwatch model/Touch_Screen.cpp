/**
 * Project Smartwatch
 */


#include "Touch_Screen.h"
/**
 * Touch_Screen implementation
 */


/**
 * @return Touch_input
 */

Motion_type Touch_Screen::get_input() {

    Motion_type input;
    static int init_pos[] = {-1,-1};
    int treshold = 100;
    int new_pos[2];

    if(is_pressed){
        if (init_pos[0] == -1 && init_pos[1]==-1){
            init_pos[0] = touch_pos[0];
            init_pos[1] = touch_pos[1];
        }
        else{
            new_pos[0] = touch_pos[0];
            new_pos[1] = touch_pos[1];
            if (new_pos - init_pos >= treshold) input = SLIDE_RIGHT;
            else if (init_pos - new_pos>= treshold) input = SLIDE_LEFT;
            else input = PRESS;
            init_pos[0] = -1;
            init_pos[1] = -1; 
            return input;
        }
    }
    
    return IDLE;   
}