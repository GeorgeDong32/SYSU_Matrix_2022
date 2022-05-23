#include "ExtTime.h"
#include <iomanip>
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
ExtTime::ExtTime(int ih, int im, int is, ZoneType iz) :
	Time(ih, im, is), zone(iz){}

ExtTime::ExtTime(): Time(), zone(EST) {}

void ExtTime::Set(int hours, int minutes, int seconds, ZoneType timeZone)
{
	Time::Set(hours, minutes, seconds);
	zone = timeZone;
}

void ExtTime::Write() const
{
	Time::Write();
	switch (zone)
	{
	case EST:
		cout << " EST";
		break;
	case CST:
		cout << " CST";
		break;
	case MST:
		cout << " MST";
		break;
	case PST:
		cout << " PST";
		break;
	case EDT:
		cout << " EDT";
		break;
	case CDT:
		cout << " CDT";
		break;
	case MDT:
		cout << " MDT";
		break;
	case PDT:
		cout << " PDT";
		break;
	default:
		break;
	}
}
