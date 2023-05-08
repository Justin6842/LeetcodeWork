class Solution {
    public int diagonalSum(int[][] mat) {
        int sol = 0;
        for (int i = 0; i < mat.length; i++){
            sol += mat[i][i];
        }
        for (int i = 0; i < mat.length; i++){
            sol += mat[mat.length-1-i][i];
        }
        if (mat.length%2 == 1) sol -= mat[mat.length/2][mat.length/2];
        return sol;
    }
}