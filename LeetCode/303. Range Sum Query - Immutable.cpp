 class NumArray {
public:
    vector< int>  sum;
    NumArray(vector<int>& nums) {
        sum.resize(nums.size()+1,0);

        for(int i=1;i<=nums.size();i++){
            sum[i]+=sum[i-1]+nums[i-1];
        }
    }

    int sumRange(int l, int r) {
        return sum[r+1]-sum[l];
    }
};
