import java.util.*;
class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int sol = 0, x = 0;
        boolean[][] visited = new boolean[grid.length][grid[0].length];
        for (int i = 0; i < grid.length; i++){
            for (int j = 0; j < grid[0].length; j++){
                if (grid[i][j] == 1 && !visited[i][j]) {
                    x = DFS(grid, visited, i, j);
                }
                if (x > sol) sol = x;
            }
        }
        return sol;
    }
    private int DFS(int[][] grid, boolean[][] visited, int i, int j){
        if (i < 0 || i == visited.length || j < 0 || j == visited[0].length || visited[i][j] || grid[i][j] == 0) return 0;
        visited[i][j] = true;
        if (allVisited(grid, visited, i, j)) return 1;
        int sum = DFS(grid, visited, i-1, j)+DFS(grid, visited, i+1, j)+DFS(grid, visited, i, j-1)+DFS(grid, visited, i, j+1)+1;
        return sum;
    }
    private boolean allVisited(int[][]grid, boolean[][] visited, int i, int j){
        int x = 0;
        if (i-1 < 0 || visited[i-1][j] || grid[i-1][j] == 0) x++;
        if (i+1 == visited.length || visited[i+1][j]|| grid[i+1][j] == 0) x++;
        if (j-1 < 0 || visited[i][j-1]|| grid[i][j-1] == 0) x++;
        if (j+1 == visited[0].length || visited[i][j+1]|| grid[i][j+1] == 0) x++;
        if (x == 4) return true;
        return false;
    }
}