// http://codeforces.com/problemset/problem/381/A

#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

const int MAXN = 1000;
int cards[MAXN];
int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int sum[2];
    memset(sum, 0, sizeof(sum));
    int player = 0;
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        if (cards[i] > cards[j]) {
            sum[player] += cards[i++];
        } else {
            sum[player] += cards[j--];
        }
        player = (player + 1) % 2;
    }

    cout << sum[0] << " " << sum[1] << endl;
}
