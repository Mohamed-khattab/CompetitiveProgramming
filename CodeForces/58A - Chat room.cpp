#include<iostream>
using namespace std ;
int main(){
    string word, hello="hello";
    cin>>word;
    int j=0, chars=0;
    for(int i=0; i<word.length();i++){
        if(word[i]==hello[j]){
            j++;
            chars++;
        }
    }
    if(chars==hello.size()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
