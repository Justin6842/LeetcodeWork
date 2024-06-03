class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(), false);
        int sol{0};
        for (int i = 0; i < isConnected.size(); i++){
            if (visited[i] == false){
                DFS(isConnected, visited, i);
                sol++;
            }
        }
        return sol;
    }
    void DFS(vector<vector<int>>& isConnected, vector<bool>& visited, int center){
        visited[center] = true;
        for (int j = 0; j < isConnected.size(); j++){
            if (isConnected[center][j] == 1 && visited[j] == false){
                DFS(isConnected, visited, j);
            }
        }
    }
};