#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;
int main() {
    int t ;  cin >> t  ;
    int num1 , num2  ; int  results[t];
    for (int i = 0; i < t ; ++i) {
        cin>> num1 >> num2 ;
        results[i] = ceil(abs(num2 -num1)/double (10));

    }
    for (int i = 0; i < t; ++i)
        cout<< results[i]<< endl ;
}
