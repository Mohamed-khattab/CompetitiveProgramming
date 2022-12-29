class Solution {
public:
    bool ispali(string s,int  l , int  r ){
        while(l < r) {
            if(s[l]!= s[r])  return false ;

            l ++ ;
            r -- ;
        }
        return true ;
    }
    bool validPalindrome(string s) {

        int left=0  , right =s.size()-1 ;
        while(left <right)
        {
            if(s[left]==s[right]){
                left ++ ;
                right -- ;

            } else return ispali(s,left, right-1 ) || ispali(s, left +1 , right)  ;

        }

        return true ;

    }
};
