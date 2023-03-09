#include <iostream>
using namespace std ;
#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <algorithm>
typedef long long ll ;
bool sortByVal(const pair<char, ll> &a , const pair<char,ll> &b)
{
    return a.second >b.second ;
}

int main() {
     ll n , k ; cin >> n >> k;
     string s ; cin >>s ;
     map<char,  ll> mp ;
     for( auto c : s ){
         mp[c]++ ;
     }
     long long  sum =0 ;

//    map<string, int> :: iterator it2;

    vector<pair<char, ll>> vec;

    for (auto & it2 : mp)
    {
        vec.emplace_back(it2.first, it2.second);
    }
    // // sort the vector by increasing order of its pair's second value
    sort(vec.begin(), vec.end(), sortByVal);
    int i =0 ;
     while( k > 0){
         if( k > vec[i].second )
         {
             sum += vec[i].second*vec[i].second ;
             k -= vec[i].second ;
         }else{
             sum += k*k ;
             k = 0 ;
         }
        i++;
     }
     cout << sum <<endl;

    return 0;
}
