#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main() {
    string num; cin>>num;
    int count=0;
    int len=num.length();
    while(len>1){
        int sum=0;
        for(int i=0;i<len;i++){
            sum+=num[i]-'0';
        }
        num=to_string(sum);
        len=num.length();
        ++count;
    }
    cout<<count<<endl;
    return 0;
}
