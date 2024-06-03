import java.util.*;
class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> sol = new ArrayList<Integer>();
        spiral(matrix, 0, 0, matrix.length, matrix[0].length, sol);
        return sol;
    }
    private void spiral(int[][] matrix, int startX, int startY, int dimX, int dimY, List<Integer> sol){
        if (dimX <= 0 || dimY <= 0) return;
        for (int i = 0; i < dimY; i++){
            sol.add(matrix[startX][startY+i]);
        }
        for (int i = 1; i < dimX; i++){
            sol.add(matrix[startX+i][startY+dimY-1]);
        }
        if (dimX > 1){
            for (int i = 2; i < dimY+1; i++){
                sol.add(matrix[startX+dimX-1][startY+dimY-i]);
            }
        }
        if (dimY > 1){
            for (int i = 2; i < dimX; i++){
                sol.add(matrix[startX+dimX-i][startY]);
            }
        }   
        spiral(matrix, startX+1, startY+1, dimX-2, dimY-2, sol);
    }
}