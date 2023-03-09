#include <iostream>
using namespace std ;
#include <bits/stdc++.h>

int main() {
     int n ; cin >> n ;
         int sx , sy ; cin >>sx >>sy ;
         int ex ,ey ; cin >>ex >>ey ;
         string s ; cin >>s ;

         int count =0 ;  bool flag = false;

        for( auto c:s  ){
             if( c =='S'){
                 if( sy > ey)
                      sy-=1 ;
             }
             if( c =='E'){
                 if(sx <ex)
                     sx+=1 ;

             }
             if( c =='N'){
                 if(sy < ey )
                     sy+=1 ;

             }
             if( c =='W'){
                 if(sx >ex )
                   sx -=1 ;

             }

             count ++ ;

             if( sx == ex && sy ==ey)
             {
                 flag = true ;
                 break;
             }

         }
         if( flag )
         cout<<count <<endl;
         else
         cout<<"-1"<<endl;
    return 0;
}
