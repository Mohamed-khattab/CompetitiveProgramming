#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
typedef long long ll ;

int main() {
    int t; cin >> t;
    while (t--) {
        int n ; cin >>n ;
        vector<int> mx ;
        vector<int>mn ;
        int pos =0 ; int neq =0 ;
        for (int i = 0; i <n ; ++i) {
            int a ; cin >>a ;
            if( a >0 )
                pos ++ ;
            else
                neq ++ ;
        }

        for(int i =1 ; i<= pos ; ++i)
            mx.push_back(i) ;
        for (int i = pos-1 ; i >= pos-neq ; --i) {
            mx.push_back(i) ;
        }

        for( int i=1 ; i<= neq ; ++i){
            mn.push_back(1);
            mn.push_back(0) ;
        }
        for(int i =1 ; i <= pos-neq ; ++i){
            mn.push_back(i) ;
        }

        for( int i =0 ; i <n ; i++ )
            cout <<mx[i] <<" " ;
        cout<<endl;


        for( int i =0 ; i <n ; i++ )
            cout <<mn[i] << " " ;
        cout<<endl;


    }
    return 0;
}
