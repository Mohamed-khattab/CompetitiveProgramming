#include <bits/stdc++.h>
using namespace std;

void check() {
    int length; cin >> length;
    string s; cin >> s;
    map<char, int> char_index;

    for (int i = 0; i < length; ++i) {
        if (char_index.find(s[i]) != char_index.end()) {
            if ((i - char_index[s[i]]) % 2 != 0) {
                cout << "NO\n" ;
                return;
            }
        } else{
                char_index[s[i]] = i;
        }

        char_index[s[i]] = i;
    }
    cout << "YES\n" ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases--) {
        check();
    }

    return 0;
}
