#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n, a ; cin >>n >>a ;
    int cities[n] ;
    for (int i = 0; i <n  ; ++i) {
        cin >>cities[i] ;
    }
    int  l = a-2;  int r = a ;
    int criminal = cities[a-1] ;
    while(l >= 0 || r < n ){
        if(( l>=0 && r<n)&&(cities[l]==1 && cities[r] ==1))
            criminal +=2 ;
        else if((l < 0 && cities[r]==1 )|| (r >= n && cities[l] ==1 ))
            criminal++ ;
            l -- ; r ++ ;

    }
    cout<< criminal<< endl  ;
    return 0;
}
