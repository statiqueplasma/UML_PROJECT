/**
 * Project Smartwatch
 */


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
    date Date;
    Bool Is_Paired;
    int Heart_Rate;
    GPS_coord POS;
    float bat_lvl;
    int Altitude;
    void user_id;
};

#endif //_MOBILE_APP_H