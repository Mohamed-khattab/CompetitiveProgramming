class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m -1 ;
        int p2 = n -1 ;

        int total =  n+m -1 ;                   //  {1, 2, 3, 0, 0, 0};
                                                //   x = {2, 5, 6};
        while (p1 >= 0 && p2 >= 0 )
        {
            if(nums1[p1] < nums2[p2])
                nums1[total--] = nums2[p2--] ;
            else
                nums1[total--] = nums1[p1--] ;

        }

        while(p2 >=0 )
            nums1[total--] = nums2[p2--] ;



    }
};
