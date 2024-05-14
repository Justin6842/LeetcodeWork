class Solution {
public:
    int dfsGrid(vector<vector<int>>& grid, vector<vector<int>>& visited, int x, int y){
        visited[x][y] = 1;
        int left = 0;
        if (y-1 < 0) left = 0;
        else if (grid[x][y-1] > 0 && visited[x][y-1] == 0) left = dfsGrid(grid, visited, x, y-1);
        int right = 0;
        if (y+1 >= grid[0].size()) right = 0;
        else if (grid[x][y+1] > 0 && visited[x][y+1] == 0) right = dfsGrid(grid, visited, x, y+1);
        int up = 0;
        if (x-1 < 0) up = 0;
        else if (grid[x-1][y] > 0 && visited[x-1][y] == 0) up = dfsGrid(grid, visited, x-1, y);
        int down = 0;
        if (x+1 >= grid.size()) down = 0;
        else if (grid[x+1][y] > 0 && visited[x+1][y] == 0) down = dfsGrid(grid, visited, x+1, y);
        int horizontal = max(left, right);
        int vertical = max(up, down);
        int total = max(horizontal, vertical);
        total += grid[x][y];
        visited[x][y] = 0;
        return total;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int sol = 0;
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] > 0){
                    sol = max(sol, dfsGrid(grid, visited, i, j));
                }
            }
        }
        return sol;
    }
};