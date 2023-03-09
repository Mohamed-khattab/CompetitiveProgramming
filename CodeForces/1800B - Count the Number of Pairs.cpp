#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int count_burles(string s , int k ) {
    int cnt =0 ;
    map<char , int> mp ;
    vector<int> out;
    for(int i =0 ; i<s.size() ; ++i){
        mp[s[i]] ++ ;
    }

    for(auto itr : mp ){
        char c = itr.first ;
        if(isupper(c)){
            char low = ::tolower(c) ;
            if(mp.find(low) != mp.end()){
                out.push_back(abs(mp[c] - mp[low])/2)  ;
                cnt += min(mp[c] , mp[low]) ;
                mp.erase(low) ;
             }
            else
                out.push_back(mp[c]/2) ;
        }else{
            char up = ::toupper(c) ;
            if(mp.find(up) != mp.end()){
                out.push_back(abs(mp[c] - mp[up])/2)  ;
                cnt += min(mp[c] , mp[up]) ;
                mp.erase(up) ;

            }
            else
                out.push_back(mp[c]/2) ;
        }
    }
    int sum =0 ;
    for(auto  s: out){
        sum+= s ;
    }
    if(sum >=k)
        cnt += k ;
    else
        cnt +=sum ;



    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int k ; cin >> k ;
        string s;
        cin >> s;
        cout << count_burles(s , k ) << endl;
    }
    return 0;
}
