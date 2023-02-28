#include <istream>
#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main(){
   string s ; cin >> s;
   ll right =0 ; ll left = 0 ; int pivot =0 ;
   for(int i =0  ; i <s.size() ; ++i) {
       if(s[i] == '^')
           pivot = i ;
   }
    for (int i = 0; i <s.size() ; ++i) {
     if(isdigit(s[i]) && i<pivot)
         left += (s[i] -'0')*(pivot - i ) ;
     if(isdigit(s[i]) && i > pivot)
         right += (s[i] -'0')*(i -pivot ) ;
    }
    right >left ? cout<<"right"<<endl : (right == left ? cout<<"balance"<<endl : cout<<"left"<<endl) ;

    return 0 ;
}

