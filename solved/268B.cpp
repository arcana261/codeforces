// http://codeforces.com/problemset/problem/268/B

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = n;
    for (int i = 1; i < n; i++) {
        result += i * (n - i);
    }

    cout << result << endl;
}
