#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n  , m ;
       cin >> n  >> m;

       int arr[n ] ;
       int prefix_sum[n] ;
       int suffix_sum[n] ;

        for (int i = 0; i <n ; ++i) {
            cin >>arr[i] ;
        }
        prefix_sum[0] =arr[0] ;
        suffix_sum[n-1] = arr[n-1] ;
        for(int i=1; i<n; i++){
            prefix_sum[i] = prefix_sum[i-1] + arr[i];
        }
        for(int i=n-2; i>=0; i--){
            suffix_sum[i] = suffix_sum[i+1] + arr[i];
        }


        for (int i = 0; i <m ; ++i) {
            int sum1 =0 ; int sum2=0 ;
            int a, b, c ; cin >>a>>b>>c ;
            int sum = (b - a + 1)*c ;
            if(a!= 1)
                sum1 = prefix_sum[a-2];
            if(b !=n)
             sum2 =  suffix_sum[b];


            if((sum + sum1 +sum2)%2 !=0 )
            cout<<"yes" <<endl ;
            else
            cout<<"NO" <<endl;

        }


    }
    return 0;
}
