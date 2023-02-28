#include <iostream>
using namespace std ;
#include <bits//stdc++.h>


int main() {
    int t ; cin >>t ;
    while(t--) {
        int  n ; cin >> n ;
        string s  ; cin >> s ;

        int count =0 ; int mx =0 ;

        set<int> st1 ;
        unordered_map<char , int > mp2 ;

        for (int i = 0; i <s.size() ; ++i) {
          mp2[s[i]] ++ ;
        }

        for(int i =0; i <s.size() ; ++i){
            if(mp2[s[i]]== 1 )
                 mp2.erase(s[i]);
            else
                mp2[s[i]]-- ;
            st1.insert((s[i])) ;
            count = st1.size() + mp2.size() ;
            mx = max(mx , count) ;
        }
            cout <<mx <<endl;
    }
    return 0;
}
