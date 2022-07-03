#ifndef ExtTime_H
#define ExtTime_H
#include   "Time.h"
enum  ZoneType {EST, CST, MST, PST, EDT, CDT, MDT, PDT } ;

class  ExtTime  :  public  Time	// Time is the base class
{
public :
        ExtTime ( int  initHrs ,  int  initMins ,  int  initSecs ,
		  ZoneType    initZone ) ;      // constructor
        ExtTime ( ) ; 			             // default constructor
        void Set ( int  hours,  int  minutes,  int   seconds ,
                         ZoneType   timeZone ) ;	
        void Write ( )  const ;
        
private :				
	ZoneType  zone ; 	//  added data member
} ;


#endif
