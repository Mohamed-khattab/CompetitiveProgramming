#include <iostream>
using namespace std ;
#include <bits//stdc++.h>


int main() {
    int t ; cin >>t ;
    while(t--) {
        int n ; cin >> n ;
        int cards[2] = {1,0};
        n-- ; int loop1 =2 ;
        int loop2  ;
        while(n >0) {
            if(n < loop1 )
                loop2  = n  ;
            else
                loop2= loop1 ;
            cards[(loop1%4)/2] += loop2  ;
            n -= loop2 ;
            loop1 ++ ;
        }

        cout << cards[0]<<" "<<cards[1]<< endl;
    }
    return 0;
}
