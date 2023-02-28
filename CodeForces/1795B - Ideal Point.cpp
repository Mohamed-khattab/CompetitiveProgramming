
#include <istream>
#include <bits/stdc++.h>
using namespace std ;


int main(){
    int t; cin >>t ;
    while(t--){
        int n , k ; cin >> n >> k ;
        bool sflag = false  , eflag = false;
        vector<pair<int , int>> v ;
        for (int i = 0; i <n  ; ++i) {
            int a , b; cin >>a>>b ;
            if( a == k)
                sflag = true ;
            if( b == k)
                eflag = true ;
            v.push_back(make_pair(a,b)) ;
        }
        if(sflag && eflag )
            cout <<"YES" <<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0 ;
}
