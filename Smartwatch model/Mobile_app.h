/**
 * Project Smartwatch
 */

#include<data_type.h>
#ifndef _MOBILE_APP_H
#define _MOBILE_APP_H

class Mobile_app {
public: 
    
void Pair();
    
void Send_time();
    
int Request_HR();
    
float Request_bat_lvl();
    
int Request_GPS();
    
float Request_Alt();
private: 
    Time Time;
    bool Is_Paired;
    int Heart_Rate;
    GPS_coord POS;
    float bat_lvl;
    int Altitude;
    int user_id;
};

#endif //_MOBILE_APP_H