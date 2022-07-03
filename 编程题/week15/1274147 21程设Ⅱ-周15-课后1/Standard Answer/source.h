#include <iostream>
using namespace std;

template < typename T >
T maxValue (const T value1, const T value2) {
	if (value1 >= value2)
		return value1;
	else
		return value2;
}

char maxValue(const char char1, const char char2) {
	char ch1 = char1;
	char ch2 = char2;
	if (char1 >= 'a' && char1 <= 'z')
		ch1 += 'A' -'a';
	if (char2 >= 'a' && char2 <= 'z')
		ch2 += 'A' -'a';
	if (ch1 >= ch2)
		return char1;
	else
		return char2;
}
