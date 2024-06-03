import java.util.*;
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] sol = new int[nums.length];
        sol[0] = 1;
        sol[1] = nums[0];
        for (int i = 2; i < nums.length; i++){
            sol[i] = sol[i-1]*nums[i-1];
        }
        int extra = nums[nums.length-1];
        sol[nums.length-2] *= extra;
        for (int i = nums.length-3; i > -1; i--){
            extra *= nums[i+1];
            sol[i] *= extra;
        }
        return sol;
    }
}