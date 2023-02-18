/**
 * Project Smartwatch
 */


#ifndef _USER_H
#define _USER_H

class User {
public: 
    
void Login();
    
void Logout();
    
void Pair();
    
void Mesure_HR();
    
void Mesure_Alt();
    
void App_Cmd();
private: 
    int Heart_rate;
    String ID;
    int Age;
};

#endif //_USER_H