#include <iostream>
using namespace std ;
#include <bits/stdc++.h>
#include <algorithm>
int main() {
    int n ; cin >> n ;
    int k ; cin >> k;
     int sum =0 ; vector<int> vect ;
     for( int i =0 ; i <n ; ++i){
         int a ; cin >>a ;
         if( a<0 )
         vect.push_back(a) ;
     }
     sort(vect.begin() , vect.end()) ;
     int s = vect.size() ;
     for( int i =0 ; i < min(k ,s) ; i ++ ){
         sum += abs( vect[i]) ;
     }

    cout<< sum<<endl;
    return 0 ;
}
