import java.util.*;
class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        if (r*c != mat.length*mat[0].length) return mat;
        int[][] sol = new int[r][c];
        int a = 0, b = 0;
        for (int i = 0; i < mat.length; i++){
            for (int j = 0; j < mat[0].length; j++){
                sol[a][b] = mat[i][j];
                if (b == c-1){
                    b = 0;
                    a++;
                }
                else{
                    b++;
                }
            }
        }
        return sol;
    }
}