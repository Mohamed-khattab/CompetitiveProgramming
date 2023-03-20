#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ; cin >>n;
        int can[n] ;
        int sum_even =0 ; int sum_odd =0 ;
        for(int i =0 ; i <n ; ++i){
            cin >>can[i] ;
            if(can[i]%2  ==0 )
                sum_even +=can[i] ;
            else
                sum_odd += can[i] ;
        }
        int even_indices = (n + 1) / 2;
        int odd_indices = n / 2;

        if(sum_even >sum_odd)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
