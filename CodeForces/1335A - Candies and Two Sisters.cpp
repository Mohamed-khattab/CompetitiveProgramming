#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;

int main() {
    int t ;  cin >> t  ;
    long long num ; long results[t];
    for (int i = 0; i < t ; ++i) {
        cin>> num ;
        if(num%2 == 0)
            results[i] =num/2 -1 ;
        else
            results[i] = num/2;


    }
    for (int i = 0; i < t; ++i)
        cout<< results[i]<< endl ;
}
