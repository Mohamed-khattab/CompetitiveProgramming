#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
typedef  long long ll ;
int main() {
    int n ; cin >>n ;
    unordered_map<int, int> mp ;
    for(int i =1 ; i<=n ; ++i){
        int num ; cin >> num  ;
        mp[num] = i ;
    }
    ll vas(0) ;ll pat(0) ;
    int m ; cin >> m ;
    while (m--) {
        int b ;cin >> b ;
        vas += mp[b] ;
        pat += (n +1-mp[b] );
    }
    cout << vas <<" "<<pat;
    return 0;
}
