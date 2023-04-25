class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> gaps; // map of gaps and their frequencies
        int maxGaps = 0; // maximum number of gaps
        for (const auto& row : wall) {
            int gap = 0;
            for (int i = 0; i < row.size() - 1; i++) { // skip last brick
                gap += row[i]; // accumulate gap
                maxGaps = max(maxGaps, ++gaps[gap]); // update gap frequency and maxGaps
            }
        }
        return wall.size() - maxGaps; // number of rows minus maxGaps
    }
};
