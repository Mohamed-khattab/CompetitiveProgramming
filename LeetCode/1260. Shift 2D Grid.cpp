class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while(k--){
            int m = grid.size() ;
            int n =  grid[0].size() ;
            int temp1 = grid[m-1][n-1] ;
            int temp2 ;

            for( int i =0 ; i < m*n; ++i){
                temp2 = grid[((i)/n)%m][(i)%n] ;
                grid[((i)/n)%m][(i)%n]= temp1 ;
                temp1 =  temp2 ;
            }
        }
        return grid ;

    }
};
