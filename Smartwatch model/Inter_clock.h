/**
 * Project Smartwatch
 */

#include<data_type.h>
#ifndef _INTER_CLOCK_H
#define _INTER_CLOCK_H

class Inter_clock {
public: 
    
Time get_time();
    
Time get_date();
    
void increment();
private: 
    Time Time;
};

#endif //_INTER_CLOCK_H