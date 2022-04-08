#include "source.h"
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("2.in","r",stdin);
	//freopen("2.out","w",stdout);
	int N, M;
	string name;
	string code;
	double cost;
	cin >> N;
	M = N;
	int i = 0;
	Book *books[N];
	while (i++ < N) {
		cin >> name >> code >> cost;
		books[i] = new Book(name, code, cost);
	}
	i = 0;
	while (i++ < M) {

		cout << "-----:" << *books[i];

	}
	i = 0;
	while (i++ < M) {

		cout << leftform << *books[i];

	}
	i = 0;
	while (i++ < M) {

		cout << rightform << *books[i];

	}

}
