#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
 int t ; cin >>t ;
   while(t--) {
       int n; cin >> n;
       int c , sum =0 , ones =0 ;
       for (int i = 0; i < n; ++i) {
           cin >> c;
           if(c == 1) ones ++ ;
           sum += c;
       }
       if( sum % 2 ==0){
           if((sum/2) %2 ==0){
               cout<<"YES"<<endl ;
               continue;
           }else
               if(ones){
                   cout<<"YES"<<endl ;
                   continue;
               }
       }
       cout<<"NO"<<endl;
   }
    return 0;
}
