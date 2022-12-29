class Solution {
public:
    int maxArea(vector<int>& height) {

        int st=0 ; int end = height.size()-1 ;
        int mx = INT_MIN ;
        int sum =0 ;
        while(st<end){
            sum =min(height[st], height[end]) *(end - st) ;
            mx = max(mx,sum);
            if(height[st]> height[end]) end --  ;
            else   st ++ ;
        }
    return mx ;

    }
};
