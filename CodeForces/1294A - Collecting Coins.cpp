#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;

int main() {
    int n,t ;
    cin >> t  ;
    int coins[3] ;
    string results[t];
    for (int i = 0; i < t ; ++i) {
        cin >> coins[0]>>coins[1]>>coins[2]>>n   ;
        sort(coins, coins + 3) ;

        int c =  2*coins[2] - coins[1] - coins[0] ;
        if( n < c)
            results[i] = "NO" ;
        else {
            if ((n - c) % 3 == 0)
                results[i] = "YES";
            else
                results[i] = "NO";
        }
    }
    for (int i = 0; i < t; ++i) {
        cout<< results[i]<< endl ;

    }
}
