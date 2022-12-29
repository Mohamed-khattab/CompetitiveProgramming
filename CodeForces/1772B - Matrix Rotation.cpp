#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std ;
int main() {
    int t ,c  ;  cin >> t  ;
    int nums[4] ; string results[t];

    for (int i = 0; i < t ; ++i) {
        cin>> nums[0] >> nums[1] ;  // vars
        cin >> nums[3] >>nums[2] ;


        c = 5 ;
        while (c --    ){
            if(nums[0] < nums[1] && nums[0] < nums[3] && nums[1] <nums[2] && nums[3] < nums[2]){
                results[i] = "YES" ;
                break;
            }
            else{
                // here is to rotate the matrix ;
                int temp1 = nums[0] ;
                int  temp2 ;

                for (int j = 0 ; j < 4; ++j) {

                    temp2 = nums[(j+1)%4] ;
                    nums[(j+1)%4] = temp1;
                    temp1 = temp2 ;
                }
            }

        }
        if(c <= 0 )
            results[i] = "NO" ;
    }
    for (int i = 0; i < t; ++i)
        cout<<results[i]<< endl ;
}
