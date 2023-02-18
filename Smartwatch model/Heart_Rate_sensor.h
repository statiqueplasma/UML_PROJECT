/**
 * Project Smartwatch
 */


#ifndef _HEART_RATE_SENSOR_H
#define _HEART_RATE_SENSOR_H

#include "Sensor.h"


class Heart_Rate_sensor: public Sensor {
public: 
    
int get_hr();
private: 
    int Heart_rate;
};

#endif //_HEART_RATE_SENSOR_H