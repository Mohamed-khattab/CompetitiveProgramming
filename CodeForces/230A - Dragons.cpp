#include <iostream>
using namespace  std  ;
#include <bits/stdc++.h>
typedef long long ll ;
using ll=long long;
using ld=long double;
int const INF=1000000005;
ll const LINF=1000000000000000005;
ll const mod=1000000007;
ld const PI=3.14159265359;
ll const MAX_N=3e5+5;
ld const EPS=0.00000001;
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#define f first
#define sec second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define sz(a) (int)a.size()
#define CODE_START  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    int s, n; cin >>s >> n ; int i  ;
    vector<pair<int , int >> dragons ;
    for( i =0 ; i < n ; ++i){
        int d_s  ,d_bonus ;
        cin >>d_s >>d_bonus  ;
        dragons.pb(mp(d_s , d_bonus)) ;
    }
    sort(dragons.begin() , dragons.end()) ;
    for(int i =0 ; i <n ;++i){
         int d_s = dragons[i].f ;
         int d_bonus = dragons[i].sec ;
        if(d_s >= s )
        {
            cout <<"NO" ;
            return  ;
        }
        else
            s+= d_bonus ;
    }
    cout <<"YES" ;


}
int main (){

    solve() ;

    return 0 ;

}
