#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main() {
    unordered_map<char, int> mp ;
     int m =3 ;
     while (m--){
        string exp ;  cin >>exp ;
        if(exp[1] =='>'){
            mp[exp[0]] ++ ;
            mp[exp[2]] +=0 ;
        }
        else {
            mp[exp[0]] += 0;
            mp[exp[2]]++;
        }
    }
     vector<char> out (3,'A');
     bool flag = false ; int past = 4 ; // any random value except 0,1,2
     for( auto s : mp ){
         if(past == s.second)   flag = true ;  // if there is rep then print impossible
         out[s.second ] = s.first;
         past = s.second ;
     }
     if(flag)
         cout<< "Impossible"<< endl ;
     else
        cout<< string(out.begin() , out.end())<<endl ;
    return 0;
}
