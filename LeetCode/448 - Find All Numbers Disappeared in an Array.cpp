using namespace std ;
#include <bits//stdc++.h>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> dis ;
        for (int i = 0; i < size; ++i){
            int n = abs(nums[i]) ;
            if(nums[n-1] > 0 )
                 nums[n-1] = -nums[n-1] ;
        }
        for(int i =0 ; i < size ; ++i)
            if(nums[i] >0 ) dis.push_back( i+1 ) ;
        return dis ;
    }
};
