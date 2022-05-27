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

class Weekend :virtual public Writing,virtual public Racing {
 public:
  Weekend () {
   cout<<"Weekend constructor"<<endl;
  }
  ~Weekend () {
   cout<<"~Weekend"<<endl;
  }
};

class Workday :virtual public Racing,virtual public Writing {
 public:
  Workday () {
   cout<<"Workday constructor"<<endl;
  }
  ~Workday () {
   cout<<"~Workday"<<endl;
  }
};

class Choseday:virtual public Weekend,virtual public Workday{
	 public:
  Choseday () {
   cout<<"Choseday constructor"<<endl;
  }
  ~Choseday () {
   cout<<"~Choseday"<<endl;
  }
};