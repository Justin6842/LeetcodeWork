import java.util.*;
class Solution {
    public int[] findBall(int[][] grid) {
        int[] sol = new int[grid[0].length];
        for (int i = 0; i < grid[0].length; i++){
            sol[i] = pass(grid, i);   
        }
        return sol;
    }
    private int pass(int[][] grid, int y){
        int x = 0, s = -1;
        while(true){
            if (x == grid.length){
                s = y;
                break;
            }
            if (grid[x][y] == 1){
                if (y == grid[0].length-1) break;
                else if (grid[x][y+1] == -1) break;
                x++;
                y++;
            }
            else{
                if (y == 0) break;
                else if (grid[x][y-1] == 1) break;
                x++;
                y--;
            }
        }
        return s;
    }
}