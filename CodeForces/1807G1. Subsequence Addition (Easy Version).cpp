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

void burn(int tc)
{
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    ll sm = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > sm) return void (cout << "NO");
        sm+=a[i];
    }
    cout << (a[0] == 1 ? "YES" : "NO");
}

int main()
{

    int T = 1; cin >> T;

    for (int i = 1; i <= T; i++) {
        burn(i);
        cout << '\n';
    }
    return 0;
}
