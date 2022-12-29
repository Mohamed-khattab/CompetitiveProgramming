class Solution {
public:
    bool wordPattern(string pattern, string s) {


        unordered_map<string ,char> mp2 ;
        unordered_map<char,string >mp1 ;

        stringstream iss(s) ;
        string word ;
        vector<string > words ;

        while(iss >> word )
            words.push_back(word) ;

        if(pattern.size() != words.size())
            return false;
        for(int i =0 ; i < words.size() ; ++i ){
                word = words[i] ;
            char c = pattern[i ];
            if( mp1[c] != "" && mp1[c] !=word ) return false ;
            if( mp2[word]  && mp2[word] != c  ) return false ;
            mp2[word] = c ;
            mp1[c] = word ;
        }
        return true;


    }
};
