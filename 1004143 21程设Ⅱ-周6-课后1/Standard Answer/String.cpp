#include "String.h"
#include <iostream>
#include<cstring>
STRING::STRING()
{	
   
     length = 0;
     buffer = NULL;
}
STRING::STRING(const char *str)
{
     length = strlen(str);
     buffer = new char[length+1];
     if (buffer!=NULL) 
           strcpy(buffer,str);
}
STRING::~STRING()
{   
     if (buffer)  
          delete []buffer;    
}

STRING::STRING(const STRING &another)
{	
     length = another.length;
     buffer = new char[length+1];
     if (buffer!=NULL) 
           strcpy(buffer,another.buffer);
}
