#include <iostream>
using namespace std ;
#include <bits//stdc++.h>
int main() {
    int t ; cin >>t ;
    while(t--) {
       int  n ; cin >> n ;
       string s  ; cin >> s ;
       int l =0 ; int r = s.size() -1 ;
       if(s.size() == 1 )
           cout <<"1"<<endl;
       else {
           while(((s[l] == '1' && s[r] == '0') || (s[l] == '0' && s[r] == '1'))&& r>l )
           {
               l ++ ; r -- ;
           }
           cout <<r-l +1 << endl;
       }
    }
    return 0;
}
