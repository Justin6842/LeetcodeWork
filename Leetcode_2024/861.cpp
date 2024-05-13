class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int power = pow(2, grid[0].size()-1);
        int sol = grid.size()*power;
        for (int i = 0; i < grid.size(); i++){
            if (grid[i][0] == 0){
                for (int j = 1; j < grid[0].size(); j++){
                    grid[i][j] = !(grid[i][j] & 1);
                }
            }
        }
        for (int j = 1; j < grid[0].size(); j++){
            int ones = 0;
            power /= 2;
            for (int i = 0; i < grid.size(); i++){
                if (grid[i][j] == 1) ones++;
            }
            if (ones < (grid.size()-ones)) sol += (grid.size()-ones)*power;
            else{ sol += ones*power; }
        }
        return sol;
    }
};