#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main(){
     int t; cin >> t;
     while(t--){
         int n; cin >> n ;
         int m =0 ;
         vector<int> v ;
        for (int i = 0; i < n; ++i) {
             int a; cin >> a;
             if (a == -1)
                 m++;
             v.push_back(a);
         }

         bool flag = false;
         for (int j = 0; j < n - 1; ++j) {
             if (v[j] == v[j + 1] && v[j] == -1)
                 flag = true;
        }
        if(m ==0 )
            m +=2 ;
        if (flag) m -= 2;
        cout << n- m-m << endl;
     }
    return 0 ;
}
