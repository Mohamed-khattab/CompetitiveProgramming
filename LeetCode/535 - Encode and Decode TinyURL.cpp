class Solution {
public:
    map<string,string>codes;
    int start =1 ;
    string base = "http://tinyurl.com/";
    string encode(string longUrl) {
        string res = base + to_string(start++) ;
        start ++ ;
        codes[res] = longUrl ;
         return res ;
        }
    string decode(string shortUrl){
        return codes[shortUrl] ;

    }
};
