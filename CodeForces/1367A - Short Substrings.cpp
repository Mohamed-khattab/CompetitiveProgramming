    #include <bits/stdc++.h>
    #include <stdlib.h>
    using namespace std ;

    int main(){
        int t  ;
        cin >>t ;
        string temp;
        string out = "";
        for (int i = 0; i <t ; ++i) {
            cin >> temp ;
            out = "";
            for (int j = 0; j <temp.size() ; ++j) {
                if(temp.size() -j == 2 ){
                    out += temp.substr(j );
                    break ;
                }
                out += temp[j] ;
                j ++ ;
            }
            cout << out << endl ;
        }
    }
