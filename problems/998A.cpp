// http://codeforces.com/problemset/problem/998/A

#include <iostream>
using namespace std;

int packets[10];
int n;
int sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> packets[i];
        sum += packets[i];
    }

    if (n < 2) {
        cout << -1 << endl;
        return 0;
    }

    bool done = false;

    for (int i = 0; i < n; i++) {
        if (packets[i] != sum - packets[i]) {
            cout << i+1 << endl;
            done = true;
            break;
        }
    }

    if (!done) {
        cout << -1 << endl;
    }
}
