import java.util.*;
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if (target > matrix[matrix.length-1][matrix[0].length-1] || target < matrix[0][0]) return false;
        int low = 0, high = matrix.length, i = 0, mid = 0;
        while (true){
            mid = (low+high)/2;
            if (matrix[mid][0] <= target && matrix[mid][matrix[0].length-1] >= target){
                i = mid; 
                break;
            }
            else if (mid == low) return false;
            else if (matrix[mid][0] > target) high = mid;
            else{
                low = mid;
            }
        }
        low = 0;
        high = matrix[0].length;
        while (true){
            mid = (low+high)/2;
            if (matrix[i][mid] == target){
                return true;
            }
            else if (low == mid) break;
            else if (matrix[i][mid] > target) high = mid;
            else{
                low = mid;
            }
        }
        return false;
    }
}