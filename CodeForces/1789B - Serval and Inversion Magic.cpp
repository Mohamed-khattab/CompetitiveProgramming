#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPalin(string s ){
   string p = s;
    reverse(p.begin(), p.end());
    if (s== p) return true ;
    return false;
}

int main(){
    int t ; cin >>t ;
    while(t--){
        int n ; cin >> n ;
        string s ; cin >> s;
        if(isPalin(s))
            cout <<"YES"<<endl;
        else {
            int l =0  , r=  n -1 ;
            while(l <=r ) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else
                    break;
            }

            while( l <=r ) {
                if (s[l] == s[r]) {
                    break;
                } else {
                    s[l] = s[r];
                    l++;
                    r--;
                }
            }
            if(isPalin(s))
                cout <<"YES"<<endl ;
            else
                cout <<"NO"<<endl;

        }
    }


    return 0;
};
