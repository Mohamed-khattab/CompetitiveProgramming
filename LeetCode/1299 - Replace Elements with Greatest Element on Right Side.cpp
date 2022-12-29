class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

      int leftMax = -1 ;
      int n ;
      for(int i = arr.size()-1; i>=0 ; i--)
      {
          n = arr[i];
          arr[i] = leftMax;
          leftMax = max(leftMax,n);
      }
    return arr ;
    }
};
