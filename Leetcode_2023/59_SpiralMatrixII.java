import java.util.*;
class Solution {
    public int[][] generateMatrix(int n) {
        int[][] sol = new int[n][n];
        fill(sol, n, 0, 0);
        return sol;
    }
    private void fill(int[][] sol, int n, int k, int val){
        if (n == 0) return;
        if (n == 1){
            sol[k][k] = val+1;
            return;
        }
        for (int i = k; i < n+k; i++){
            val++;
            sol[k][i] = val;
        }
        for (int i = k+1; i < n+k-1; i++){
            val++;
            sol[i][n+k-1] = val;
        }
        for (int i = n+k-1; i > k-1; i--){
            val++;
            sol[n+k-1][i] = val;
        }
        for (int i = n+k-2; i > k; i--){
            val++;
            sol[i][k] = val;
        }
        fill(sol, n-2, k+1, val);
    }
}