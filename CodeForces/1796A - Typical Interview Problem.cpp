#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;

bool isSubstring_find(string basicString, string basicString1);

#include <string>

int main() {
    int t ; cin >>t ;
    string x = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB" ;
    while(t--){
        int n ; cin >> n ;
        string s ; cin >>s ;
        cout<< (isSubstring_find(s, x) ? "Yes" : "No") << endl;

    }
    return 0;
}

bool isSubstring_find(string basicString, string basicString1) {
    return basicString1.find(basicString) != std::string::npos;
}
