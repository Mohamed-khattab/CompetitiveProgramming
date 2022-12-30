#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ; cin>> t;
    int ballon_nums =0 ;
    unordered_map<char, int> mp ;
    for (int i = 0; i <t ; ++i) {
        int n ; cin >> n ;
        mp.clear() ;ballon_nums =0 ;
        string problems ; cin >> problems ;
        for (int j = 0; j <problems.size() ; ++j) { // ABA
            if(mp.find(problems[j]) == mp.end())
                ballon_nums +=2 ;
            else
                ballon_nums ++ ;
            mp[problems[j]] ++ ;
        }
        cout << ballon_nums << endl;
    }
    return 0;
}
