#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;

int main() {
    int t ;  cin >> t  ;
    int games[4] ; string results[t];
    for (int i = 0; i < t ; ++i) {
        cin >> games[0]>>games[1]>>games [2]>>games[3]   ;
        if(max(games[0],games[1]) > min(games[2],games[3]) && max(games[3],games[2]) > min(games[1],games[0]))
            results[i] = "YES";
        else
            results[i] = "NO";
    }
    for (int i = 0; i < t; ++i) {
        cout<< results[i]<< endl ;

    }
}
