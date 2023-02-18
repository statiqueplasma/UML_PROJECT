/**
 * Project Smartwatch
 */


#ifndef _TOUCH SCREEN_H
#define _TOUCH SCREEN_H

class Touch Screen {
public: 
    
Touch_input get_input();
private: 
    int Height;
    int width;
    int[2] touch_pos;
    int[] touch_array;
    bool is_pressed;
    Motion_type motion;
    float press_time;
};

#endif //_TOUCH SCREEN_H