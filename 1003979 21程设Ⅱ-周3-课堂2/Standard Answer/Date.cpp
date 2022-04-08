#include "Date.h"
#include <iostream>
using namespace std;

int DaysInMonth( int, int );

DATE::DATE()
{
    year = 1970;
    month = 1;
    day = 1;
}

DATE::DATE(int newYear, int newMonth, int newDay)
{
    year = newYear;
    month = newMonth;
    day = newDay;
}

DATE::~DATE()
{
    cout << "The DATE CLASS will be destroyed." << endl;
}

int DATE::getMonth() const
{
    return month;
}
int DATE::getDay() const
{
    return day;
}
int DATE::getYear() const
{
     return year;
}
void DATE::Print() const
{
    switch (month)
    {
        case 1 :
            cout << "January";
            break;
        case 2 :
            cout << "February";
            break;
        case 3 :
            cout << "March";
            break;
        case 4 :
            cout << "April";
            break;
        case 5 :
            cout << "May";
            break;
        case 6 :
            cout << "June";
            break;
        case 7 :
            cout << "July";
            break;
        case 8 :
            cout << "August";
            break;
        case 9 :
            cout << "September";
            break;
        case 10 :
            cout << "October";
            break;
        case 11 :
            cout << "November";
            break;
        case 12 :
            cout << "December";
            break;
    }
    cout << ' ' << day << ", " << year << endl;

}
void DATE::Increment()
{
    day++;
    if (day > DaysInMonth(month, year))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}
void DATE::Decrement()
{
    day--;
    if ( day == 0 )
    {
        if( month == 1 )
        {
             day = 31;
             month = 12;
             year--;
        }
        else
        {
             month--;
             day = DaysInMonth( month, year );
        }
    }
}
int DaysInMonth(  int mo,  int yr  )
{
    int computedDay = 1; // intialize with a default value
    switch (mo)
   {
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
        computedDay = 31;
        break;
     case 4: case 6: case 9: case 11:
        computedDay = 30;
        break;
     case 2:
        if ((yr % 4 == 0 && yr % 100 != 0) ||yr % 400 == 0)
            computedDay = 29;
        else
            computedDay = 28;
        break;
    }
    return computedDay;
}

