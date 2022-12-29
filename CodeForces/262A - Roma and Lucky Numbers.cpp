#include <iostream>
#include <bits/stdc++.h>
using namespace std ;


int main() {
    int t ,k ; cin >> t >> k  ;
    int count =0 ;
    string num ;
    for (int i = 0; i <t ; ++i) {
        cin >> num  ;
        int lucky_count =0 ;
        for(int j=0 ; j<num.size(); ++j){
            if(num[j] =='4' || num[j] =='7'  )
                lucky_count ++ ;
        }
        if(k >= lucky_count)
            count ++;
    }
    cout<<count  ;
    return 0;
}
