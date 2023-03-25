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


void solve(){
    int n  ; cin >> n ;
    vector<int> ps(n);
    for(int i =0 ; i < n ; i++){
        cin >> ps[i] ;
        if(i) ps[i] += ps[i-1] ;
    }

    auto qry = [&](int l , int r ){
        cout  <<"? "<< r-l+1 << ' '<<l+1  ;
        for( int i = l+1 ; i <=r ; i++){
            cout <<' '<< i+1 ;
        }
        cout <<endl;
        int res  ; cin >> res ;
        return res ;
    };

    int st = 0 ,en = n-1 ;
    while(st <= en ){
        int mi = (st+en)/2 ;
        int sm = ps[mi] - (st? ps[st-1] : 0) ;
        if( sm != qry(st , mi))
            en = mi -1 ;
        else
            st = mi +1 ;
    }
    cout <<"! " << en+2 ;
}
int main (){
    int t ; cin >> t;
    while(t--){
        solve() ;
        cout <<endl;
    }
    return 0 ;

}
