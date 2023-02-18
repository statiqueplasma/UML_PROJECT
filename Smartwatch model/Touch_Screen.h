/**
 * Project Smartwatch
 */

#include<data_type.h>
#ifndef _TOUCH_SCREEN_H
#define _TOUCH_SCREEN_H

class Touch_Screen {
public: 
    
Motion_type get_input();
private: 
    int Height;
    int width;
    int touch_pos[2];
    int touch_array[10];
    bool is_pressed;
    Motion_type motion;
};

#endif //_TOUCH_SCREEN_H