// http://codeforces.com/problemset/problem/766/A

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << -1;
    } else {
        cout << max(a.size(), b.size());
    }
    cout << endl;
}
