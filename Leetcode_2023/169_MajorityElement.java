import java.util.*;
class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int j = 0, count = 0;
        for (int i = 0; i < nums.length; i++){
            if(nums[i] != j){
                j = nums[i];
                count = 1;
            }
            else{
                count++;
            }
            if (count > nums.length/2) return j;
        }
        return 0;
    }
}
