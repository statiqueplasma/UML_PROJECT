/**
 * Project Smartwatch
 */


#ifndef _GPS_SENSOR_H
#define _GPS_SENSOR_H

#include "Sensor.h"

class GPS_Sensor: public Sensor {
public: 
    
GPS_coord get_gps();
private: 
    GPS_coord POS;
};

#endif //_GPS_SENSOR_H