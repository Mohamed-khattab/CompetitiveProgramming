#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
#include <string>

bool checkPalin( int n ){
    string  h = to_string(n/60) ;
    string  min = to_string(n%60) ;
    if(h.size() ==1 ) h.insert(0,"0") ;
    if(min.size() ==1 ) min.insert(0,"0") ;

    reverse(min.begin()  ,min.end()) ;
    if(h == min )return true ;
    return false ;

}
int main(){
   string s ; cin >> s;
   int min = stoi(s.substr(0,2)) *60 + stoi(s.substr(3,2)) ;
   bool flag = false ;
   while( ! flag ){
      min ++;
      min%=1440;
      if(checkPalin(min))
          flag = true ;
   }
   string h = to_string(min/60);
   if(h.size() ==1 )
        h.insert(0,"0") ;
   string m = to_string(min%60) ;
   if(m.size() ==1 )
       m.insert(0,"0") ;
   cout <<h<<":"<<m<<endl;




    return 0 ;
}
