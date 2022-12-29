#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;
int main() {
    int t ;  cin >> t  ;
    int num1 , num2  ; int  results[t];
    for (int i = 0; i < t ; ++i) {
        cin>> num1 >> num2 ;
        if(num1 == num2)
            results[i] = 0 ;

        else if(num1 < num2 ) {
            if ((num1 - num2) % 2 != 0)
                results[i] = 1;
            else
            results[i] = 2 ;
            }
        else{
            if ((num1 - num2) % 2 != 0)
                results[i] = 2;
            else
                results[i] = 1 ;
        }
    }
    for (int i = 0; i < t; ++i)
        cout<< results[i]<< endl ;
}
