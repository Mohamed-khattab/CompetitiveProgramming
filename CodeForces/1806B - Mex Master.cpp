#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define fir first
#define sec second

const int MAXN = 200005;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int zeros = 0;
        bool greater_than_one = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                zeros++;
            } else if (x >= 2) {
                greater_than_one = true;
            }
        }

        if (zeros <= (n + 1) / 2) {
            cout << "0\n";
        } else if (greater_than_one || zeros == n) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }
    return 0;
}
