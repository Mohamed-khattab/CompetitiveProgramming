import java.util.Arrays;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);
        int oldNum ; int newNum ; int i ;
        for ( i = 1; i < nums.length ; i++) {
            oldNum = nums[i-1] ;
            newNum = nums[i] ;
            if(oldNum == newNum)
                break;
        }
        if(i == nums.length)
            return false ;
        else
            return true ;
    }
}
