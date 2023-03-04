#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int nW, boxW;
        cin >> nW >> boxW;
        vector<int> v(nW, 0);
        for (int i = 0; i < nW; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int sp = boxW, count = 1;

        while (!v.empty()) {
            vector<int>::iterator iter = upper_bound(v.begin(), v.end(), sp);
            if (iter != v.begin()) {
                iter--;
                sp -= *iter;
                v.erase(iter);
            } else {
                sp = boxW;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
