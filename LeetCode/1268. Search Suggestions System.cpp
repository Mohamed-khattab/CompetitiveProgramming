class Solution {
public:

    vector<vector<string>> suggestedProducts(vector<string>&products, string searchWord) {
        sort(products.begin() , products.end()) ;
        vector<vector<string>> out ;
        string curr ="" ;
        for(auto c : searchWord){
            curr +=c ;
            auto it = lower_bound(products.begin() , products.end() , curr) ;
            vector<string>sugg ;
            for( int i =0 ; i <3 && it+i != products.end(); ++i){
                string& s = *(it+i) ;
                if(s.find(curr)) break;
                sugg.push_back(s);
            }
            out.push_back(sugg) ;

        }

    return out ;
    }
};
