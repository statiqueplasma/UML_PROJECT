/**
 * Project Smartwatch
 */


#ifndef _ALTIMETER_H
#define _ALTIMETER_H

#include "Sensor.h"


class Altimeter: public Sensor {
public: 
    
float get_alt();
private: 
    float Pressure;
    float Altitude;
};

#endif //_ALTIMETER_H