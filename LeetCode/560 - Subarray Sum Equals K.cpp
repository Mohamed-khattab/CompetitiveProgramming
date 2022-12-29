class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    map<int,int>mp ;
      mp[0]= 1;
      int sum =0 ;
      int count =0 ;
        for(int i =0 ; i<nums.size();++i){
            sum+= nums[i] ;
            int f = sum-k ;
            if(mp.find(f) != mp.end()){
                count +=mp[f] ;
            }
            mp[sum] ++ ;
        }
    return count ;
    }
};
