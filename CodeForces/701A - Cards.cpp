#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


int main() {
    int t ,card; cin >> t   ;
    vector<pair<int,int>>cards ;
    for (int i = 0; i < t ; ++i) {
        cin >> card ;
        cards.push_back(make_pair(card , i+1)) ;
    }
    sort(cards.begin(), cards.end());
    for (int i = 0; i <t/2 ; ++i) {
        cout << cards[i].second<<" "<<cards[cards.size()-i-1].second<<endl;
    }
    return 0;
}
