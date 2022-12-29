class Solution {
public:
    bool isIsomorphic(string s, string t) {

             map<char, char> smp;
             map<char,char> tmp ;

             for(int i =0 ; i <s.size(); i++){
                 if(smp[s[i]]&& smp[s[i]] !=t[i] || tmp[t[i]] &&tmp[t[i]]!= s[i])
                     return false ;

                 smp[s[i]] = t[i];
                 tmp[t[i]] = s[i] ;

             }  return true ;
    }
};
