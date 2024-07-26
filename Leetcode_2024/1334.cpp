class Solution {
public:
    int connec(int cur, int remain, vector<vector<int>>& graph){
        vector<int> reached(graph.size(), 0);
        vector<int> visited(graph.size(), 0);
        reached[cur] = remain;
        visited[cur] = 1;
        queue<pair<int, int>> que;
        que.push({cur, remain});
        while(que.size() != 0){
            int cycleSize = que.size();
            for (int i = 0; i < cycleSize; i++){
                pair temp = que.front();
                que.pop();
                for (int j = 0; j < graph.size(); j++){
                    int dis = graph[temp.first][j];
                    if (j != temp.first && dis > 0 && (temp.second-dis) >= reached[j]){
                        reached[j] = (temp.second-dis);
                        visited[j] = 1;
                        que.push({j, (temp.second-dis)});
                    }
                }
            }
        }
        int sol = 0;
        for (int i = 0; i < visited.size(); i++){
            if (visited[i] != 0) sol++;
        }
        return (sol-1);
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        int sol = 0;
        int total = n;
        vector<vector<int>> graph(n, vector<int>(n));
        for (int i = 0; i < edges.size(); i++){
            graph[edges[i][0]][edges[i][1]] = edges[i][2];
            graph[edges[i][1]][edges[i][0]] = edges[i][2];
        }
        for (int i = 0; i < n; i++){
            int connections = connec(i, distanceThreshold, graph);
            if (connections <= total){
                total = connections;
                sol = i;
            }
        }
        return sol;
    }
};