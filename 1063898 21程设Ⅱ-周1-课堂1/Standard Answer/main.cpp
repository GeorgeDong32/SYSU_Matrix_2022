#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl << a * b << endl;
	if(b) cout << (double)a / b << endl;
	else cout << 0 << endl;
	return 0;
}