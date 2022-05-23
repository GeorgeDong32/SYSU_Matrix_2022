#include<iomanip>
#include<iostream>
using namespace std;
ostream & leftform (ostream& strm) {
 strm << resetiosflags(ios::fixed);
 strm.flush();
 strm << setiosflags(ios::left);
 strm << "left :";
 strm << setw(15);
 strm << setiosflags(ios::fixed);
 strm << setprecision(2);
 return strm;
}

ostream & rightform (ostream& strm) {
 strm << resetiosflags(ios::fixed);
 strm.flush();
 strm << setiosflags(ios::right);
 strm << "right:";
 strm << setw(15);
 strm << setiosflags(ios::fixed);
 strm << setprecision(2);
 return strm;
}

class Book {
  string name;
  string code;
  double cost;
 public:
  Book(string s,string c,double co):name(s),code(c),cost(co) {}
  friend ostream & operator << (ostream & os, const Book & b) {
   os << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setw(15) << b.name << setw(15) << b.code << setw(15) << b.cost << endl;
   return os;
  }
};
