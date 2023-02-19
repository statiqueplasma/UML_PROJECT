/**
 * Project Smartwatch
 */

#include <iostream>
#ifndef _BLE_H
#define _BLE_H

class BLE {
    public: 
        int BAUD_RATE;
        std::string COM;
        bool Port_busy;
        
        void Send_Trame();
            
        void Receive_Trame();
};

#endif //_BLE_H