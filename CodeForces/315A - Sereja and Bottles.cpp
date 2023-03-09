#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> bottles(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        bottles[i] = make_pair(a, b);
    }

    int unopenable_count = 0;
    for (int i = 0; i < n; i++) {
        bool can_open = false;
        for (int j = 0; j < n; j++) {
            if (i != j && bottles[j].second == bottles[i].first) {
                can_open = true;
                break;
            }
        }
        if (!can_open) {
            unopenable_count++;
        }
    }

    cout << unopenable_count << endl;

    return 0;
}
