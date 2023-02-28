#include <istream>
#include <bits/stdc++.h>
using namespace std ;

int main(){
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;
    int place ; cin >> place ;
    int c = 3 ;
    while (c-- )
    {
        int a ,b; cin >> a>>b ;
       a== place ? place = b : ( place =place==b ?a:place );
    }
    cout<<place<<endl;
    return 0 ;
}

