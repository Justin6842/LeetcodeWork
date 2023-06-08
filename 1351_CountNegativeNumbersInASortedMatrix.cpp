class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sol {0};
        int height = grid.size();
        int length = grid[0].size();
        for (int i = 0; i < height; i++){
            for (int j = 0; j < length; j++){
                if (grid[i][j] < 0){
                    sol += (height-i)*(length-j);
                    length = j;
                }
            }
        }
        return sol;
    }
};