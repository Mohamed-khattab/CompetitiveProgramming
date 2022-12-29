

#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
using namespace std ;
int main() {
    int t; cin >> t;
    string handel ;
    int before_context , after_context ;
    string status = "NO";
    for (int i = 0; i < t ; ++i) {
        cin >> handel >> before_context >> after_context;
        if (before_context >= 2400 && after_context > before_context)
            status = "Yes";
    }
    cout<< status<< endl;
}
