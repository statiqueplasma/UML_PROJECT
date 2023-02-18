/**
 * Project Smartwatch
 */


#ifndef _SMARTWATCH CONTROLLER_H
#define _SMARTWATCH CONTROLLER_H

class Smartwatch Controller {
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
    Bool Is_Paired;
    GPS_coord POS;
    int Heart_Rate;
    int Altitude;
    date Date;
    Time Time;
    bool lo_bu_pressed;
    bool up_bu_pressed;
    void user_input;
};

#endif //_SMARTWATCH CONTROLLER_H