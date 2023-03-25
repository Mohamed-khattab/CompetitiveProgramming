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
#define s second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define sz(a) (int)a.size()
#define CODE_START  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    int n, m ; cin >>n>>m ;
    vector<int> puzzles ;
    for( int i =0 ; i <m  ; ++i){
      int t ;  cin >>t ;
        puzzles.pb(t);

    }
    sort(puzzles.begin() , puzzles.end()) ;
    int mn =INT_MAX ; int diffrence =0 ;
    if( n >= m){
        mn = puzzles[m-1] - puzzles[0];

    }else {
    for(int i =0 ; i <= m-n ; ++i){
        diffrence = puzzles[i+n-1] - puzzles[i] ;
        mn = min(mn , diffrence) ;
    }
    }
    cout << mn ;



}
int main (){

    solve() ;

    return 0 ;

}
