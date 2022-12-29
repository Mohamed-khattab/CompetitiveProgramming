class Solution {
public:
    static  bool comp(string s1 , string s2){
        return s1+s2 >s2+s1 ;
    }
    string largestNumber(vector<int>& nums) {
        string new_arr[nums.size()] ;
        for(int i =0 ; i<nums.size();++i )   new_arr[i]= to_string(nums[i]);
        string ans ="" ;
        sort(new_arr,  new_arr + nums.size(),comp);

        for(int i =0; i<nums.size(); ++i) ans+=new_arr[i] ;
        if(new_arr[0]== "0") return "0";
        return ans ;

    }
};
