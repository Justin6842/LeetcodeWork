class Solution {
public:
    void adjustMap(vector<vector<int>>& safe, int x, int y, int n){
        safe[x][y] = n;
        if (y-1 >= 0 && n+1 < safe[x][y-1]) adjustMap(safe, x, y-1, n+1);
        if (y+1 < safe.size() && n+1 < safe[x][y+1]) adjustMap(safe, x, y+1, n+1);
        if (x-1 >= 0 && n+1 < safe[x-1][y]) adjustMap(safe, x-1, y, n+1);
        if (x+1 < safe[0].size() && n+1 < safe[x+1][y]) adjustMap(safe, x+1, y, n+1);
    }

    int maximumSafenessFactor(vector<vector<int>>& grid){
        int sol = 0;
        vector<vector<int>> safe(grid.size(), vector<int>(grid[0].size(), 800));
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), 0));
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == 1){
                    adjustMap(safe, i, j, 0);
                }
            }
        }
        priority_queue<pair<int,pair<int,int>>> que;
        que.push({safe[0][0], {0,0}});
        visited[0][0] = 1;

        while(!que.empty()){
            sol = que.top().first;
            pair<int, int> temp = que.top().second;
            que.pop();
            if (temp.first == grid.size()-1 && temp.second == grid[0].size()-1) return sol;

            if (temp.first-1 >= 0 && visited[temp.first-1][temp.second] == 0){
                visited[temp.first-1][temp.second] = 1;
                que.push({min(sol, safe[temp.first-1][temp.second]), {temp.first-1,temp.second}});
            }
            if (temp.first+1 < grid.size() && visited[temp.first+1][temp.second] == 0){
                visited[temp.first+1][temp.second] = 1;
                que.push({min(sol, safe[temp.first+1][temp.second]), {temp.first+1,temp.second}});
            }
            if (temp.second-1 >= 0 && visited[temp.first][temp.second-1] == 0){
                visited[temp.first][temp.second-1] = 1;
                que.push({min(sol, safe[temp.first][temp.second-1]), {temp.first,temp.second-1}});
            }
            if (temp.second+1 < grid[0].size() && visited[temp.first][temp.second+1] == 0){
                visited[temp.first][temp.second+1] = 1;
                que.push({min(sol, safe[temp.first][temp.second+1]), {temp.first,temp.second+1}});
            }
        }

        return sol;
    }
};