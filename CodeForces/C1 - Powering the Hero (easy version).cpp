#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ;cin >>n ;
        int a ;
        vector<int>bonus ;
        ll army =0 ;
        for( int i =0 ; i < n ; ++i){
            cin >> a;
            if( a != 0)
                bonus.push_back(a) ;
            else{
                if(!bonus.empty()){
                    sort(bonus.begin() , bonus.end()) ;
                    army += bonus[bonus.size() -1] ;
                     bonus.pop_back() ;
                }
            }
        }
        cout <<army<<endl;

    }
    return 0;
}
