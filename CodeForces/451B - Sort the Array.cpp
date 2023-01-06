#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
typedef long long ll;

int main() {
    int n ; cin >>n;
    unordered_map<int,int> mp ;
    int a[100010]{0}  , t[100010]{0};
    for (int i = 1; i <=n ; ++i) {
        cin>> a[i] ;
        t[i] =a[i] ;
    }
    sort(a+1 , a+n+1);
    vector<pair<int,int>> vect ;
    int l =1 , r =n ;
    bool leftFlag = false  , rightFlag = false  , isNotEqual = false;
    while (l<=r){
        if(a[l] == t[l])
            l++ ;
        else
            leftFlag = true;
        if(a[r] == t[r])
            r --;
        else
            rightFlag = true;
        if(rightFlag && leftFlag ){
            reverse(t+l , t+r+1);
            vect.push_back(make_pair(l , r)) ;
            rightFlag = false; r -- ;
            leftFlag = false; l ++ ;
            isNotEqual = true ;
        }
    }
    if(vect.size() !=1  && isNotEqual )
        cout<<"no"<<endl ;
    else if(!isNotEqual )
        cout<<"yes"<<"\n"<<1<<" "<<1;
    else
        cout<<"yes"<<"\n"<<min(vect[0].first,vect[0].second)<<" "<< max(vect[0].first,vect[0].second);
    return 0;
}
