// Project Smartwatch
#include "Inter_clock.h"

// Inter_clock implementation
// The Inter_clock class is responsible for timekeeping on the smartwatch.

/**

@return Time
*/
Time Inter_clock::get_time() {
// Returns the current time
return time;
}

void Inter_clock::set_time(Time& time){
    // Sets the current time to the provided time
    time = time;
}

void Inter_clock::increment() {
    // Increments the time by one second
    bool isLeapYear = ((time.year % 4 == 0) && (time.year % 100 != 0)) || (time.year % 400 == 0);
    // Check if current year is a leap year
    int daysInMonth;
    // Variable to hold the number of days in the current month

    // Determine the number of days in the current month
    switch (time.month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            daysInMonth = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            daysInMonth = 30;
            break;
        case 2: // February
            daysInMonth = isLeapYear ? 29 : 28;
            break;
    }

    // Increment the time by one second
    if (time.sec == 59)
    {
        time.sec = 00;
        if (time.min == 59)
        {
            time.min == 00;
            if(time.hour == 23){
                time.hour = 00;
                if (time.day == daysInMonth){
                    time.day = 01;
                    if (time.month == 12)
                    {
                        time.month = 01;
                        time.year++;
                    }
                }else{
                    time.day++;
                }
            }
            else{
                time.hour++;
            }
        }
        else{
            time.min++;
        }
    }
    else{
        time.sec += 1;
    }
}