using namespace std ;
class Solution {
        public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int > freq ;
        for (int i = 0; i <nums.size() ; ++i) {
            freq[nums[i]] ++ ;
        }
        vector<int> c ;
        vector<vector<int>> res ;

        for (int i =nums.size(); i >= 1; --i) {
            c.clear();
            for(auto item : freq){
                if (item.second == i ) {
                    c.push_back(item.first);
                }
            }

            if(not c.empty()){
              res.push_back(c);
            }

        }
        int count =0 ;
        c.clear();
        for (int i = 0; i < k ; ++i) {
            for (auto e : res[i] ) {
                c.push_back(e) ;
                count ++ ;
            }
            if(count == k )
                break ;
        }
            return c;
    }
};
