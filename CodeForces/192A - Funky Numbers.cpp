

#include <istream>
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ; cin >> n ;
    vector<int> v ;
    int ans=0 ; int i =1 ;
    while(ans < n )
    {
        ans = i*(i+1)/2 ;
        v.push_back(ans) ;
        i++ ;
    }
    int j ;
    for( j =0  ; j < v.size() ; ++j  ){
         if(binary_search(v.begin() , v.end() ,  n - v[j]))
             break;
    }
    if( j == v.size())
        cout<<"NO" <<endl;
    else
        cout <<"YES" << endl;
    v.clear() ;
    return 0 ;
}

