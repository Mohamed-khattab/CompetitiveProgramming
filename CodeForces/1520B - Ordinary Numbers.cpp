#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int t ; cin>> t;
    string num ;
    int ordinary_nums  ;

    for (int i = 0; i <t ; ++i) {
        cin >> num ;
        string diversor ="" ;
        for (int j = 0; j <num.size() ; ++j) diversor+="1";
        ordinary_nums = ( num.size() -1 ) *9 +stoi(num)/ stoi(diversor) ;;
        cout << ordinary_nums<< endl;
    }
    return 0;
}
