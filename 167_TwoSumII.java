import java.util.*;
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] two = new int[2];
        int i = 0;
        int j = numbers.length - 1;
        while (i<j){
            if (numbers[i]+numbers[j]>target){
                j--;
            }
            else if (numbers[i]+numbers[j]<target){
                i++;
            }
            else{
                break;
            }
        }
        two[0] = i+1;
        two[1] = j+1;
        return two;
    }
}