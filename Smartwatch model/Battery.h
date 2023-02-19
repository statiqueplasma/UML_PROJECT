/**
 * Project Smartwatch
 */


#ifndef _BATTERY_H
#define _BATTERY_H

class Battery {
    public: 
            
        float get_bat_lvl();
    private: 
        float bat_lvl;
        float capacity;
};

#endif //_BATTERY_H