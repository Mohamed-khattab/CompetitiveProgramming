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
#define endl cout<<'\n'
#define sz(a) (int)a.size()
#define CODE_START  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


void solve(){
int n ,k  ; cin >> n>> k ;

//    vector<int> nums;
    int i =0;
    for(  i =1 ; i<=n ; ++i){
        if( k >=i ){
            cout << "4 " ;
            k-=i ;
        }
        else if( k ==0 ){
            cout <<"-1000 " ;
        }
        else{
            cout << (-4)*(i-k) +1 <<" " ;
            k=0 ;
        }
    }

}
int main (){
    int t =1  ; cin >> t;
    while(t--){
        solve() ;
        endl ;
    }
    return 0 ;

}
