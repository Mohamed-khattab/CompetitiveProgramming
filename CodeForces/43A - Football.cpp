#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;
int main() {
    int t;
    cin >> t;
    string team;

    unordered_map<string, int> mp;
    for (int i = 0; i < t ; ++i) {
        cin >> team;
        mp[team]++;
    }
    int m = 0 ;
    for (auto elm : mp ) {
        m = max(elm.second, m)  ;
    }
    for (auto elm : mp ) {
        if(elm.second == m )
            cout<< elm.first<<endl ;
    }
}
