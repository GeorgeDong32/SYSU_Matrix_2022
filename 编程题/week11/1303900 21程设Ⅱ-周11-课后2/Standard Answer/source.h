#include<iostream>
#include<string>
using namespace std;

class Writing {
 public:
  Writing() {
   cout<<"Writing constructor"<<endl;
  }
  ~Writing() {
   cout<<"~Writing"<<endl;
  }
};

class Racing {
 public:
  Racing() {
   cout<<"Racing constructor"<<endl;
  }
  ~Racing() {
   cout<<"~Racing"<<endl;
  }
};

class Weekend : public Writing, public Racing {
 public:
  Weekend () {
   cout<<"Weekend constructor"<<endl;
  }
  ~Weekend () {
   cout<<"~Weekend"<<endl;
  }
};

class Workday : public Racing, public Writing {
 public:
  Workday () {
   cout<<"Workday constructor"<<endl;
  }
  ~Workday () {
   cout<<"~Workday"<<endl;
  }
};
