#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t ; cin>> t;
    for (int i = 0; i <t ; ++i) {
       int n; cin >> n ;
        int candies[n];
        int oranges[n];
        for (int j = 0; j < n; ++j) {
            cin>>candies[j];
        }
        for (int j = 0; j < n; ++j) {
            cin>>oranges[j];
        }
        long long mov_num =0 ;
        int a_min = *min_element(candies, candies + sizeof(candies)/ sizeof(candies[0]));
        int b_min = *min_element(oranges, oranges + sizeof(oranges)/ sizeof(oranges[0]));

        for (int j = 0; j <n ; ++j) {
            int a_temp = candies[j] - a_min;
            int b_temp = oranges[j] - b_min;
            mov_num += max(a_temp,b_temp);
        }
        cout<< mov_num<<endl ;
    }
    return 0;
}
