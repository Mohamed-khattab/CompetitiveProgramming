#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n ; cin >>n ;
    int maxHeight =0;
    while (n--){
        int h ; cin >> h ;
        maxHeight = max(maxHeight, h);
    }
    cout <<maxHeight<<endl;
    return 0;
}
