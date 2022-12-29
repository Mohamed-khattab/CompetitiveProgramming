#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
using namespace std ;
int main() {
    int t; cin >> t;
    string ploy ;int faces =0 ;
    unordered_map<string, int > mp ;
    mp.insert(pair<string,int>("Tetrahedron",4));
    mp.insert(pair<string,int>("Cube",6));
    mp.insert(pair<string,int>("Octahedron",8));
    mp.insert(pair<string,int>("Dodecahedron",12));
    mp.insert(pair<string,int>("Icosahedron",20));


    for (int i = 0; i < t ; ++i) {
        cin >> ploy;
        faces += mp[ploy];
    }
        cout<<faces <<endl ;

}
