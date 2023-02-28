 
#include <iostream>
using namespace std ;
#include <bits//stdc++.h>
typedef long long ll ;
int main() {
        int t  ; cin >> t;
        while(t--){
            ll a , b ; cin >> a>>b ;
            ll n , m ; cin >>n >>m ;
            ll coins = 0 ;
            ll coins1 = 0  ;

           int g = n%(m+1);
            coins += m*a*(n/(m+1));
           if(g >0)
            coins += min(g*b , g*a) ;

            coins1 += min(n*a , n*b);

        cout <<min(coins1 , coins) <<endl;
        }

    return 0;
}
