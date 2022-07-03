#include "vector"
#include <iostream>                                                             
using namespace std;

int main() {                             
	vector<int> ivec(10, 2);             
	vector<int>::iterator iter;	         
	vector<int>::reverse_iterator riter; 

	iter = ivec.begin();	              
	*iter += 10;			              

	riter = ivec.rend();	              
	*(riter-1) += 10;		              

	iter = ivec.end();		              
	*(iter-1) = 100;		              

	riter = ivec.rbegin();	               
	*riter -= 20;

	for( iter = ivec.begin(); iter != ivec.end(); iter ++ ) {
		cout <<  *iter << " ";
	}

	cout << endl;

	for( riter = ivec.rbegin(); riter != ivec.rend(); riter++) {
		cout << *riter << " ";
	}

	return 0;
}

