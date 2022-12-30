#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ; cin>> t;
    for (int i = 0; i <t ; ++i) {
       int n; cin >> n ; int nums[n];
        int even_nums  =0 , odd_nums=0 ;
        for (int j = 0; j < n; ++j) {
            cin>>nums[j];
            if(nums[j]%2==0) even_nums ++ ;
            else odd_nums++ ;
        }
        int error_even_index  =0 ;
        int error_odd_index =0 ;
        for (int j = 0; j <n ; ++j) {
            if(even_nums !=  odd_nums && !(even_nums -odd_nums ==1) ){
                error_even_index= -1 ;
                error_odd_index =-1 ;
                continue;
            }
            if(j%2 == 0 && nums[j]%2 !=0)
                error_even_index ++ ;
            else if(j%2 !=0 && nums[j]%2 ==0)
                error_odd_index ++;
        }
        cout<< max(error_even_index,error_odd_index)<<endl ;

    }
    return 0;
}
