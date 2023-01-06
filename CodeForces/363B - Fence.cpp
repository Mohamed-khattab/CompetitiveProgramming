#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n, k ; cin >>n>>k ;
    int h[n];
    for (int i = 0; i <n  ; ++i) {
        cin >>h[i] ;
    }
    map<int, int> mp ;
    int  i, sum =0 , count =0  ;
    for ( i = 0; i <n  ; ++i) {
        if(count < k ){
            sum += h[i] ;
            count ++  ;
        }else{
            mp[sum] = i-k ; // push each sum linked to the start index  in ordered map to find the min of them
            sum += h[i] - h[i-k] ;
        }
    }
    mp[sum] = i-k ;  // push th last sum
    cout << mp.begin()->second+1 <<endl ;

    return 0;
}
