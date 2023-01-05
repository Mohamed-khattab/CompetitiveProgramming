#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
     int n ,m  ; cin >>n >>m  ;
     vector<pair<int, int>> matches ;
    while (m--){
        int a, b ; cin >>a>>b ;
        matches.push_back( pair<int,int>(b,a));
    }
    sort(matches.begin(), matches.end()) ;
    reverse(matches.begin(), matches.end()) ;
    int maxMatches =0 ;
    for (auto s : matches) {
        if(n < s.second){
            maxMatches += n* s.first ;
            break ;
        }
        else
            maxMatches += s.first *s.second ;
        n -= s.second ;
    }
    cout<< maxMatches <<endl ;
    return 0;
}
