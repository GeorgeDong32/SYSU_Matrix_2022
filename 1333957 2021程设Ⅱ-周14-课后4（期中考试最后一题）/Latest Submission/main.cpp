#include<iostream>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
int check(int table[][2], int s[], int n);

int main() {

	int n = 0;
	cin >> n;

	int table[15][2];
	for (int i = 0; i < n; i++) {
		cin >> table[i][0];
		cin >> table[i][1];
	}

	int s[15] = { 0 };

	while (!check(table, s, n)) {
		for (int i = n - 1; i >= 0; i--) {
			if (!s[i]) {
				s[i] = 1;
				break;
			}
			else {
				s[i] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << s[i] << ' ';
	}
	return 0;
}

int check(int table[][2], int s[], int n) {
	for (int i = 0; i < n; i++) {
		int poi = table[i][0];
		int sj = !(table[i][1] ^ s[i]);
		if (s[poi] != sj) return 0;
	}

	return 1;
}