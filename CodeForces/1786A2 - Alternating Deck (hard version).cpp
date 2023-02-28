#include <iostream>
using namespace std ;
#include <bits//stdc++.h>
#include <cmath>


int main() {
    int t ; cin >>t ;
    while(t--) {
        int n ; cin >> n ;
        pair<int , int> cards[2] = {make_pair(1,0),make_pair(0,0)};
        n-- ; int loop1 =2 ;
        int loop2  ; int sum = 2 ;
        while(n >0) {
            if(n < loop1 )
                loop2  = n  ;
            else
                loop2= loop1 ;

            if(loop2 %2 == 0 ){
                cards[(loop1%4)/2].first +=  loop2/2  ;
                cards[(loop1%4)/2].second += loop2/2  ;
            }else { // now  need to determine if iam standing on black or white card
                if(sum%2 == 0)  // i stand on black card
                {
                    cards[(loop1%4)/2].first += loop2/2  ;
                    cards[(loop1%4)/2].second += ceil(loop2/2.0)  ;
                }else
                {
                    cards[(loop1%4)/2].first += ceil(loop2/2.0)  ;
                    cards[(loop1%4)/2].second += loop2/2  ;
                }
            }
            n -= loop2 ;
            sum += loop2 ;
            loop1 ++ ;
        }

        cout << cards[0].first<<" " << cards[0].second<<" "<<cards[1].first <<" "<<cards[1].second<< endl;
    }
    return 0;
}
