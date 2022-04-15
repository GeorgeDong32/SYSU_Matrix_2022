#ifndef Time_H
#define Time_H
#include <iostream>
using namespace std;

class Time
{
public:
      void Set(int hours, int minutes, int seconds);
      void Increment();
      void Write() const;
      Time(int initHrs, int initMins, int initSecs); // constructor
      Time();                                        //  default constructor

private:
      int hrs;
      int mins;
      int secs;
};

#endif
