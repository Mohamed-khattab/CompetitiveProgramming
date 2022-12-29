class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j =0 ;
        for (int i = 0; i < nums.size()-1; ++i) {
            while(j < nums.size()-1){
                if(nums[j+1] < nums[j])
                    swap(nums[j+1], nums[j]);
                j++ ;
            }
            j = 0;

        }
    }
};
