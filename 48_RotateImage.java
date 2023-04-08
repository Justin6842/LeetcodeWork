import java.util.*;
class Solution {
    public void rotate(int[][] matrix) {
        rot(matrix, matrix.length, 0);
    }
    private void rot(int[][] m, int len, int k){
        if (len <= 0) return;
        int temp = 0;
        System.out.println(k);
        for (int i = 0; i < len-1; i++){
            temp = m[i+k][len-1+k];
            m[i+k][len-1+k] = m[k][i+k];
            m[0+k][i+k] = m[len-1-i+k][k];
            m[len-1-i+k][k] = m[len-1+k][len-1-i+k];
            m[len-1+k][len-1-i+k] = temp;
        }
        rot(m, len-2, k+1);
    }
}