#include "Time.h"
#include <iomanip>
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
void Time::Set(int hours, int minutes, int seconds)
{
	hrs = hours; mins = minutes; secs = seconds;
}

void Time::Increment()
{
	int minp = 0; int hrp = 0;
	if (secs < 59)
		secs++;
	else
	{
		secs = 0;
		minp++;
	}
	if (mins < 59)
		mins += minp;
	else if(mins == 59 && minp == 1) {
		mins = 0;
		hrp = 1;
		minp = 0;
	}
	if (hrs < 23)
		hrs + hrp;
	else if(hrs == 23 && hrp == 1)
	{
		hrs = 0;
		hrp = 0;
	}
}

void Time::Write() const
{
	cout << setw(2) << setfill('0') << hrs << ":" << setw(2) << setfill('0') << mins << ":" << setw(2) << secs;
}

Time::Time(int ih, int im, int is): hrs(ih), mins(im), secs(is){}

Time::Time() : hrs(0), mins(0), secs(0){}
