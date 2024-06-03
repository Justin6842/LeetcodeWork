import java.util.*;
class Solution {
    public int singleNumber(int[] nums) {
        int i = 0; 
        for (int j = 0; j < nums.length; j++){
            i ^= nums[j];
        }
        return i;
    }
}