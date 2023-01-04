#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
     int n; cin >>n ;
     string s ; cin >> s;
     if(s.size() <=2 ){
         cout<< s ;
         return  0;
     }
     vector<char> dec_word{s[0]} ;
     bool flag = true  ;
     if(n %2 ==0 )
         flag= false ;
     for (int i = 1; i <n ; ++i) {
        if(flag) {
            dec_word.insert(dec_word.begin(),s[i]) ;
            flag= false;
        }else{
        dec_word.push_back(s[i]);
        flag= true;
         }
    }
    string out (dec_word.begin(), dec_word.end());
    cout << out <<endl;
    return 0;
}
