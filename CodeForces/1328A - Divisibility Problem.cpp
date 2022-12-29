#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;
int main() {
    int t ;  cin >> t  ;
    int num1 , num2  ; int  results[t];
    for (int i = 0; i < t ; ++i) {
        cin>> num1 >> num2 ;
        if(num1 %num2 ==0)
            results[i] =0 ;
        else
        results[i] = num2 - num1%num2 ;

    }
    for (int i = 0; i < t; ++i)
        cout<< results[i]<< endl ;
}
