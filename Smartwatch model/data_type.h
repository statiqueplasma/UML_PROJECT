#include<Motion_type.h>

typedef struct Time{
    int sec;
    int min;
    int hour;
    int day;
    int month;
    int year;
} Time;

typedef struct GPS_coord{
    float LAT;
    float LON;
} GPS_coord;

typedef struct Touch_input {
    Motion_type motion;
    int positions[10];
} Touch_input;