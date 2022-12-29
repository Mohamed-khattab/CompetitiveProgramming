#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


int main() {
    int t ; cin >> t ;
    int perc ;long double   coocktail =0 ;
    for (int i = 0; i <t ; ++i) {
        cin >> perc ;
        coocktail+= perc ;
    }
    cout<< coocktail/t ;


    return 0;
}
