typedef long long ll ;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int inf = 1000000 ;
        ll sum  =0 ; int l =0 ;
        int minLen  = inf ;
        for(int r =0 ; r <nums.size() ; ++r){
            sum += nums[r] ;
            while(sum>=target){
                minLen = min( minLen , r-l +1) ;
                sum -=nums[l] ;
                l++ ;
            }
        }
        if( minLen == inf)
        return 0 ;
        return minLen ;
    }
};
