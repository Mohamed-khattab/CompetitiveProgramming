#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t;  cin >> t;
   while (t--) {
       int n;  cin >> n;

       string s; cin >> s;
       int res = n -1 ;

       for (int i = 1; i < n-1; i++) {
          if(s[i-1] ==s[i+1]) res -- ;
       }

       cout <<res << endl;
   }

   return 0;
}
