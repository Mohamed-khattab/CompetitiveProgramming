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
        priority_queue<int> pq ;
        ll army =0 ;
        for( int i =0 ; i < n ; ++i){
            cin >> a;
            if( a != 0)
                pq.push(a) ;
            else{
                if(!pq.empty()){
                    army += pq.top() ;
                     pq.pop() ;
                }
            }
        }
        cout <<army<<endl;

    }
    return 0;
}
