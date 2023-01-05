#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
     int n ; cin >>n ;
     string  colors = "ROYGBIV"; string paints ="";
    for (int i = 0; i <n/7 ; ++i) {
        paints += colors;
    }
    vector<char> red  ;
    if(n%7 !=0 )
        red.push_back('G') ;
    bool flag = true  ;
    if(n %2 ==0 ) flag= false ;
    for (int i = 0; i < n%7 -1 ; ++i) {
        if(flag) {
            red.insert(red.begin(),colors[--l]) ;
            flag= false;
        }else{
            red.push_back(colors[++r]);
            flag= true;
        }
    }
    paints += string(red.begin(), red.end()) ;
    cout << paints <<endl;
    return 0;
}
