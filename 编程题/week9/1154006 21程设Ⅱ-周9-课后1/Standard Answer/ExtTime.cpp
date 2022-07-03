#include "ExtTime.h"
#include <iostream>
#include<cstring>
using namespace std;
ExtTime::ExtTime(  int initHrs,  
                                  int initMins, 
                                  int initSecs, 
                                  ZoneType initZone )
                                : Time(initHrs, initMins, initSecs)
{
      zone = initZone;
}

ExtTime::ExtTime()
{
    zone = EST;
}
void ExtTime::Set( int hours, 
                                 int minutes, 
                                 int seconds,
                                 ZoneType timeZone )
{
    Time::Set(hours, minutes, seconds);   //调用基类函数。Why?
    zone = timeZone;
}

void ExtTime::Write() const
{
    static string zoneString[8] =
    {  "EST", "CST", "MST", "PST", "EDT", "CDT", "MDT", "PDT" };

    Time::Write();
    cout << " " << zoneString[zone];
}

