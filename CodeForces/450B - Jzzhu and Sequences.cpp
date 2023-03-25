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

int MOD = 1000000007;
void solve() {
        long long int a, b, t;
        cin >> a >> b >> t;
        long long int s[] = {a, b, b - a, -a, -b, a - b};
        cout << (s[(t - 1) % 6] % MOD + MOD) % MOD;

}
int main (){

    solve() ;

    return 0 ;

}
