/**
 * Project Smartwatch
 */

#include <data_type.h>
#ifndef _INTER_CLOCK_H
#define _INTER_CLOCK_H

class Inter_clock {
    public: 
            
        Time get_time();
            
        void set_time(Time &time);   

        void increment();
private: 
    Time time;
};

#endif //_INTER_CLOCK_H