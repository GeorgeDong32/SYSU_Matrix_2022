#include <iostream>
#include "Queue.h"
#include <string>
#include <sstream>

using namespace std;

class Job {
    public:
        explicit Job(int pri = 0) {
            id = number++;
            priority = pri;
        }
        string toString() {
            stringstream ss;
            ss << "[" << id << ":" << priority << "]";
            return ss.str();
        }
    private:
        static int number;
        int id;
        int priority;
};

int Job::number = 0;

template<class T>
void print(Queue<T> queue) {
    while (!queue.empty()) {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;
}

int main() {
    // test case 1: integer..
    Queue<int> que;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) que.push(i + 0.01);
    for (int i = 0; i < n; i++) que.pop();
    if (!que.empty()) {
        cout << que.front() << endl;
        cout << que.back() << endl;
    }
    cout << "The size is: " << que.size() << endl;
    if (que.empty()) cout << "The queue is empty!" << endl;
    else cout << "The queue is NOT empty!" << endl;

    // test case 2: double..
    Queue<double> que1;
    cin >> m >> n;
    for (int i = 0; i < m; i++) que1.push(i + 0.01);
    for (int i = 0; i < n; i++) que1.pop();
    if (!que1.empty()) {
        cout << que1.front() << endl;
        cout << que1.back() << endl;
    }
    cout << "The size is: " << que1.size() << endl;
    if (que1.empty()) cout << "The queue is empty!" << endl;
    else cout << "The queue is NOT empty!" << endl;

    // test case 3: user defined class..
    Queue<Job> que2;
    cin >> m >> n;
    for (int i = 0; i < m; i++) que2.push(Job(i));
    for (int i = 0; i < n; i++) que2.pop();

    if (!que2.empty()) {
        cout << que2.front().toString() << endl;
        cout << que2.back().toString() << endl;
    }
    cout << "The size is: " << que2.size() << endl;
    if (que2.empty()) cout << "The queue is empty!" << endl;
    else cout << "The queue is NOT empty!" << endl;

    // test case 4: swap function..
    Queue<int> que3, que4;
    for (int i = 0; i < m; i++) que3.push(i);
    for (int i = 0; i < n; i++) que4.push(m - i);
    cout << "Before Swap...." << endl;
    print(que3);
    print(que4);

    que3.swap(que4);
    cout << "After Swap...." << endl;
    cout << endl;
    print(que3);
    print(que4);
}

