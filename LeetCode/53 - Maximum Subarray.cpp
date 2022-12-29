class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSoFar =0 ;
        int maxEndingHere =0 ;

        int k =0  ;
        for ( k = 0; k <nums.size(); ++k) {
            if(nums[k] >= 0 )
                break;
        }
        if(k == nums.size()) {
            return *max_element(nums.begin(), nums.end());
        }

        for (int i = 0; i <nums.size(); i++) {

            maxEndingHere = maxEndingHere + nums[i];

            if (maxEndingHere < 0)
                maxEndingHere = 0;

            if (maxEndingHere > maxSoFar)
                maxSoFar = maxEndingHere;
        }

        return maxSoFar ;

    }
};
