#include <iostream>
#include <iomanip>
using namespace std; 

class Book
{
	private:
		string bname;
		string bcode;
		double bcost;
	public:
		void setBook(string& name, string& code, double cost);
		void printBook();
};


int main ()
{
	int NOT = 0;
	cin >> NOT;
	string name; string code; double cost = 0;
	while(NOT)
	{
		Book b;
		cin >> name;
		cin >> code;
		cin >> cost;
		b.setBook(name,code,cost);
		b.printBook();
		NOT--;
	}
	return 0;
}

void Book::printBook()
{
	cout << left << setw(15) << Book::bname;
	cout << left << setw(10) << Book::bcode;
	cout << right << setw(10) << fixed << setprecision(2) << Book::bcost << endl;
}

void Book::setBook(string& name, string& code, double cost)
{
	Book::bname = name;
	Book::bcode = code;
	Book::bcost = cost;
}