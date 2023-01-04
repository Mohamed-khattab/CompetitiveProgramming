#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
using   ll = long long ;
int main() {
 int t ; cin >>t ;
   while(t--) {
         int n; cin >> n ;
         int max_height = INT_MIN; ll horzLength =0;
         for (int i = 0; i < n; ++i) {
            int a , b; cin >> a>>b;
            max_height= max(max_height,max(a,b));
             horzLength += min(a, b)  ; // HORIZONTAL LENGTH ;
         }
         ll perm = 2*(max_height + horzLength);
        cout <<perm<<endl ;
   }
    return 0;
}
