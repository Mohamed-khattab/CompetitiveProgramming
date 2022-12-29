class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>st(nums.begin(), nums.end());
        int missing = 1 ;
        while(1){
            if(!st.count(missing ) && missing  > 0 )
                return missing ;
            missing ++ ;
        }
    }
};
