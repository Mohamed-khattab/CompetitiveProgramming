#include <iostream>
#include <vector>
using namespace std;
typedef  long long ll ;
int main() {
     ll a , b,n ; cin >>a>> b>>n ;
     ll t= a ; bool flag = false ;

    for( int  j =0  ; j <=9 ; ++j){
        if( (a*10+j)%b == 0){
            a = a*10 +j ;
            cout <<a ;
            string s(n-1 , '0') ;
            cout<<s<< endl;
            flag = true ;
             break;

        }
     }
    if(! flag ){
        cout<< "-1"<<endl;
    }



    return 0;
}
