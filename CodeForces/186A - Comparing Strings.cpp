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
    string s1 , s2 ; cin >>s1>>s2 ;
    if(s1.size() != s2.size()){
        cout <<"NO" ;
        return ;
    }
    set<char>uniq ;
    int count =0 ;
    for( int i =0 ; i <s1.size() ; ++i){
        if(s1[i] !=s2[i] ){
            uniq.insert(s1[i]) ;
            uniq.insert(s2[i]) ;
            count ++ ;
        }
    }
    if(uniq.size() == 2 && count == 2  )
        cout <<"YES" ;
    else
        cout <<"NO" ;
}
int main (){

    solve() ;

    return 0 ;

}
