class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v1 ;

        for(int i =0  ; i<nums.size(); ++i){
            if(i > 0 && nums[i]== nums[i-1] )
                     continue ;
            int num1 = nums[i];
            int st = i+1 ;
            int end= nums.size() -1 ;
            while(st <end ){
                if(num1 +nums[st]+nums[end] == 0 ){ v1.push_back({nums[i], nums[st],nums[end]});
                    int vst = nums[st];
                    int vend = nums[end];
                    while(st< end && nums[st]== vst )st ++ ;
                    while(st< end && nums[end]== vend )  end -- ;
                }else if(num1 +nums[st]+nums[end] < 0)  st ++ ;
                 else end -- ;
            }

        }
        return v1 ;
    }
};
