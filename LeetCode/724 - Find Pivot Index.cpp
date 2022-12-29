class Solution {
public:
int pivotIndex(vector<int>& nums) {
    int sum =0 ;
    for (int i = 0; i <nums.size() ; ++i) {
        sum += nums[i];
    }
    int sumSoFAr = 0 ;
    for(int i =0 ; i < nums.size(); i ++){
        if(sumSoFAr == sum - sumSoFAr - nums[i])
            return i ;
        sumSoFAr += nums[i];
    }
    return -1 ;
        }
};
