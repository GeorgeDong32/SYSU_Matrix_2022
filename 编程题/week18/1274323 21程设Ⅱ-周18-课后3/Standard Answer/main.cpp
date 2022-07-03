#include <iostream>
#include <queue>
using namespace std;
 int main() {
    int z;
    cin >> z;
    while (z--) {
        int n, m, pri;
        int count = 0;
        priority_queue<int> pri_queue;
        queue<int> cou_queue;
        queue<int> ini_queue;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> pri;
            cou_queue.push(i);
            ini_queue.push(pri);
            pri_queue.push(pri);
        }
        while (1) {
            while (ini_queue.front() != pri_queue.top()) {
                int temp = ini_queue.front();
                ini_queue.pop();
                ini_queue.push(temp);
                temp = cou_queue.front();
                cou_queue.pop();
                cou_queue.push(temp);
            }
            count++;
            if (cou_queue.front() == m) {
                cout << count << endl;
                break;
            } else {
                pri_queue.pop();
                cou_queue.pop();
                ini_queue.pop();
            }
        }
    }
    return 0;
}