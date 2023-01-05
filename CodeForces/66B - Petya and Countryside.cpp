#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n ; cin >>n ;
    int height[n]  ;
    for (int i = 0; i < n; ++i) {
        cin>>height[i];
    }
    int mx=0;
    for (int i = 0; i < n ; ++i) {
        int  l = i ; int  r = i;
        for(int j=i-1;j>=0;j--){
            if(height[j+1]< height[j])
                break;
            l-- ;
        }
        for(int j=i+1;j<n;j++){
            if(height[j-1]< height[j])
                break;
            r++;
        }
        mx = max(mx , r-l +1);
    }
    cout<< mx<< endl  ;
    return 0;
}
