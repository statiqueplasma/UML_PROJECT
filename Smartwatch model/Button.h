/**
 * Project Smartwatch
 */


#ifndef _BUTTON_H
#define _BUTTON_H

class Button {
    public: 
        bool get_status();
    private: 
        bool is_pressed;
        float press_time;
};

#endif //_BUTTON_H