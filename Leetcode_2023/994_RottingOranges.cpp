class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>> que;
        int total{0};
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 2) que.push({i, j});
                else{
                    total += grid[i][j];
                }
            }
        }
        int rounds{0};
        while (!que.empty() && total != 0){
            rounds++;
            int size = que.size();
            for (int i = 0; i < size; i++){
                int row = que.front()[0];
                int col = que.front()[1];
                que.pop();
                if (row-1 != -1 && grid[row-1][col] == 1){
                    total--;
                    grid[row-1][col] = 2;
                    que.push({row-1, col});
                }
                if (row+1 != grid.size() && grid[row+1][col] == 1){
                    total--;
                    grid[row+1][col] = 2;
                    que.push({row+1, col});
                }
                if (col-1 != -1 && grid[row][col-1] == 1){
                    total--;
                    grid[row][col-1] = 2;
                    que.push({row, col-1});
                }
                if (col+1 != grid[0].size() && grid[row][col+1] == 1){
                    total--;
                    grid[row][col+1] = 2;
                    que.push({row, col+1});
                }
            }
        }
        if (total > 0) return -1;
        return rounds;
    }
};