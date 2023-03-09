#include <iostream>
using namespace std ;
#include <bits/stdc++.h>

int main() {
    int m  ; cin>> m ;
    int num_25 =0 ; int num_50 =0 ; bool flag = true  ;

    for ( int i=0 ; i< m  ; i ++){
         int n ; cin >>n ;
         if( n ==25 )
             num_25 ++ ;
         if(n ==50)
         {
             if( num_25 >=1 ){
                 num_50++ ;
                 num_25 -- ;
             }
             else
             {
                 flag = false ;
                 break;

             }

         }
         if(n ==100 ){
             if(num_50 >=1 && num_25 >=1){
                 num_50 -- ;
                 num_25 -- ;
             }else if( num_25 >= 3){
                 num_25 -=3 ;
             }else
             {
                 flag = false ;
                 break;
             }

         }
    }
    if(  flag )
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;
}
