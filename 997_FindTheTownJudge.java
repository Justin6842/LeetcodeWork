class Solution {
    public int findJudge(int n, int[][] trust) {
        int[][] graph = new int[n][n];
        for(int i = 0; i < trust.length; i++){
            graph[trust[i][0]-1][trust[i][1]-1] = 1;
        }
        for (int i = 0; i < graph.length; i++){
            for (int j = 0; j < graph[0].length; j++){
                if (graph[i][j] == 1) break;
                if (j == graph.length-1){
                    System.out.println(i);
                    for (int k = 0; k < graph.length; k++){
                        if (graph[k][i] == 0 && i != k) return -1;
                    }
                    return i+1;
                }
            }
        }
        return -1;
    }
}