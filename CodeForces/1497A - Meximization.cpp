#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ; cin >>n;
    for(int k =0 ; k<n ; ++k){
        int m ; cin >> m ;
        int a[100] ;
        for (int i = 0; i <m ; ++i) {
            cin >>a[i] ;
        }
        set<int> mex (a,a+m) ;
        vector<int> out (mex.begin() , mex.end());
        sort(a, a+m);
        for (int i = 1; i <m ; ++i) {
            if(a[i] == a[i-1])
                out.push_back((a[i])) ;
        }
        for( auto s : out )
            cout << s<<" " ;
        cout <<endl;
    }
    return 0;
}
