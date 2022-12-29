class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> rows(9), colums(9) ;
        int boxes[3][3][10] = {0};
        for (int i = 0; i <9 ; ++i) {
            for (int j = 0; j <9 ; ++j) {
                if(board[i][j] == '.') {
                    continue;
                }
                int curr = board[i][j] -'0';
                if(rows[i].count(curr)|| colums[j].count(curr)|| boxes[i/3][j/3][curr] !=0){
                    return false;
                }
                rows[i].insert(curr);
                colums[j].insert(curr);
                boxes[i/3][j/3][curr] = curr ;
            }
        }
        return true ;
    }
};
