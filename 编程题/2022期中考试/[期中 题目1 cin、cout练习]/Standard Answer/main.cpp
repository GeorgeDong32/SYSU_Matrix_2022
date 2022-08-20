#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int seconds;
    while (cin >> seconds) {
        int hour = (seconds / 3600)%24;
        seconds %= 3600;
        int minute = seconds / 60;
        seconds %= 60;
        int second = seconds;
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << minute << ":"
             << setw(2) << second << endl;
    }
}