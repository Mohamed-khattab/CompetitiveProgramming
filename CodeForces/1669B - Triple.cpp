#include <iostream>
using namespace std ;
#include <bits//stdc++.h>
#include <map>


int main() {
    int t ; cin >>t ;
    while(t--) {
        int n ; cin>> n ;
        unordered_map<int , int > mp ;
        for (int i = 0; i <n ; ++i) {
            int a ; cin >> a ;
            mp[a] ++ ;
        }
         bool flag = false ;
        for (auto s : mp )
            if( s.second >= 3 ){
                cout << s.first << endl;
                flag = true ;
                break;
              }

        if( ! flag)
            cout <<"-1"<<endl;

    }
    return 0;
}
