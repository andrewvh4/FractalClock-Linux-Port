#include <iostream>
#include <time.h>
#include <ctime>
#include <chrono>
#include <sys/time.h>
#include <stdlib.h>
#include <iomanip>

float __get_current_time(){
    
    time_t rawtime;
    struct tm * timeinfo;

    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    ms = ms/1000;
    rawtime = (time_t) ms;
    
    timeinfo = localtime (&rawtime);
    
    float seconds = timeinfo->tm_sec;
    float minutes = timeinfo->tm_min;
    float hours = timeinfo->tm_hour;
    
    float timeval = seconds + (minutes * 60) + ((hours * 60) * 60) + (float)tp.tv_usec / 1000000;
    
    //std::cout<<timeval<<std::endl;
    
    return(timeval);
}
