class Solution {
public:
    bool isPalindrome(string s) {

        int l=0  , r =s.size()-1 ;
        while(l <r) {
            while(not(isalpha(s[l]) || isdigit(s[l]))&& l < r)   l++ ;
            while (not(isalpha(s[r]) || isdigit(s[r]))&& r> l)    r--;

            if (tolower(s[l]) == tolower(s[r])) {
                l++;
                r--;
            } else return false ;
        } return true ;
    }
};
