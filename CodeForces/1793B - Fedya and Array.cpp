#include <iostream>
using namespace std ;
#include <bits//stdc++.h>
typedef long long ll ;
int main() {
        int t  ; cin >> t;
        while(t--){
           int a , b ; cin >>a>>b ;
           cout <<2*(a-b)<<endl ;
           for(int i = b+1 ; i <=a ; ++i)
               cout << i<<' ';
           for(int i =a-1 ; i >= b ; --i)
               cout<<i <<' ';
           cout <<endl;

        }

    return 0;
}
