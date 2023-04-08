import java.util.*;
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if (matrix[matrix.length/2][matrix[0].length/2] == target) return true;
        boolean[][] visited = new boolean[matrix.length][matrix[0].length];
        return look(visited, matrix, target, matrix.length/2, matrix[0].length/2);
    }
    private boolean look(boolean[][] vis, int[][] m, int tar, int row, int col){
        if (row < 0 || row == m.length || col < 0 || col == m[0].length || vis[row][col]) return false;
        vis[row][col] = true;
        if (m[row][col] == tar) return true;
        else if (tar < m[row][col]) return (look(vis, m, tar, row-1, col) || look(vis, m, tar, row, col-1));
        else{
            return (look(vis, m, tar, row+1, col) || look(vis, m, tar, row, col+1));
        }
    }

}