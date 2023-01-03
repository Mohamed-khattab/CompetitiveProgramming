#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
 int t ; cin >>t ;
   while(t--){
       int n ; cin >>n ;
       int athletes[n] ; int min_diff= INT_MAX ;
       for (int i = 0; i <n ; ++i) {
           cin >> athletes[i];
       }
       sort(athletes , athletes+n );
       for (int i = 0; i < n-1 ; ++i) {
           int temp = athletes[i+1] - athletes[i];
              min_diff = min(min_diff,temp );
       }
       cout<< min_diff<< endl;
    }
    return 0;
}
