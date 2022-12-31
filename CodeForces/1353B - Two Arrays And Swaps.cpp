#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
 int t ; cin >>t ;
   while(t--){
        int n,k ; cin>> n >>k;
        int a[n],b[n];  int sum =0 ;
        for (int j = 0; j < n; ++j) cin>>a[j] ;

        for (int j = 0; j < n; ++j) cin>>b[j] ;

        while(k--){
            sort(a , a +sizeof(a)/sizeof (a[0]));
            sort(b, b +sizeof(b)/sizeof (b[0]));
            if(b[n-1] > a[0]) swap(a[0] , b[n-1]);
         }
        for (int j = 0; j <n; ++j) sum += a[j]  ;
        cout<<sum<<endl;
    }
    return 0;
}
