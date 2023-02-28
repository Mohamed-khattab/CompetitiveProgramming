

#include <istream>
#include <bits/stdc++.h>
using namespace std ;

string reverseStr(string  str)
{   for (int i = 0; i < str.length() / 2; i++)
        swap(str[i], str[str.length() - i - 1]);
    return str ;
}
int main(){
    int t; cin >>t ;
    while(t--){
        int rep = 0 ;
        int m , n ; cin >> m >>n ;
        string s1 , s2 ; cin >>s1 >>s2 ;
        s1 += reverseStr(s2) ;
        for (int i = 0; i < s1.size() -1; ++i)
            if(s1[i] == s1[i+1]) rep++  ;
        rep <= 1 ? cout<<"YES"<<endl: cout << "NO" << endl;
    }
    return 0 ;
}
