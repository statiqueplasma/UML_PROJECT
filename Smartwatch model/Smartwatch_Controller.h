/**
 * Project Smartwatch
 */

#include<data_type.h>
#ifndef _SMARTWATCH_CONTROLLER_H
#define _SMARTWATCH_CONTROLLER_H

class Smartwatch_Controller {
public: 
    
void Toggle_Power();
    
int Mesure_HR();
    
float Mesure_Alt();
    
GPS_coord Mesure_GPS();
    
GPS_coord get_GPS_Pos();
    
float get_bat_lvl();
    
int get_HR();
    
float get_Alt();
    
Time get_time();
    
Time Request_Time();
    
void Send_GPS();
    
void Send_HR();
    
void Send_Alt();
    
void Send_bat_lvl();
private: 
    float bat_lvl;
    bool Is_Paired;
    GPS_coord POS;
    int Heart_Rate;
    int Altitude;
    Time Time;
    bool btn_pressed;
    Touch_input user_input;
};

#endif //_SMARTWATCH_CONTROLLER_H