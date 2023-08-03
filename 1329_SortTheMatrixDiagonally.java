class Solution {
   public int[][] diagonalSort(int[][] mat) {
      int[][] sol = new int[mat.length][mat[0].length];
      for (int i = 0; i < mat.length; i++) {
         int j = 0;
         int diag = Math.min(mat.length - i, mat[0].length);
         int[] temp = new int[diag];
         for (int k = 0; k < diag; k++) {
            temp[k] = mat[i + k][j + k];
         }
         Arrays.sort(temp);
         for (int k = 0; k < diag; k++) {
            sol[i + k][j + k] = temp[k];
         }
      }
      for (int j = 1; j < mat[0].length; j++) {
         int i = 0;
         int diag = Math.min(mat.length, mat[0].length - j);
         int[] temp = new int[diag];
         for (int k = 0; k < diag; k++) {
            temp[k] = mat[i + k][j + k];
         }
         Arrays.sort(temp);
         for (int k = 0; k < diag; k++) {
            sol[i + k][j + k] = temp[k];
         }
      }
      return sol;
   }
}