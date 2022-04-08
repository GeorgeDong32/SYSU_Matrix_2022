#ifndef STRING_H
#define STRING_H
#include <iostream>
using namespace std;

class STRING {
private:	
      int     length;
      char  *buffer;
public:	
      STRING();
      STRING(const char *str);
      STRING(const STRING &another);
      STRING& operator=(const STRING& other) = delete;
      ~STRING();
	  
};

#endif
