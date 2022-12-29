
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;
int main() {
    int t ,n ,j =0   ;  cin >> t  ;
    string results[2*t];

    for (int i = 0; i < t ; ++i) {
        cin >> n ;
        if(n % 4 != 0)
            results[j++] = "NO";
        else {
            results[j++] = "YES";
            string even = "", odd = "";
            for (int k = 1; k <= n/2 ; ++k) {
                even += to_string(2 *k ) +" ";

                if(k != n/2)
                    odd += to_string(2*k -1 )+ " ";
                else
                        odd += to_string(2*k + n/2 -1) ;
            }

            results[j++] = even+ odd;

        }

    }
    for (int i = 0; i < j; ++i)
        cout<<results[i]<< endl ;
}
