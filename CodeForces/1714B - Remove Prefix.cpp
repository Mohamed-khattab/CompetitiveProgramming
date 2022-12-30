#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int t ; cin>> t;
    for (int i = 0; i <t ; ++i) {
        int n ;cin >> n ;
        int nums[n] ;unordered_map<int, int> mp ;
        for (int j = 0; j < n; ++j)  cin>>nums[j] ;
        int k ;
        for ( k = n-1; k >=0 ; --k) {
            if(mp.find(nums[k])!= mp.end()) break ;
            mp[nums[k]] = k+1 ;
        }
        cout << k+1 << endl;
    }
    return 0;
}
