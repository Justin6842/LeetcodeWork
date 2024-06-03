import java.io.*;
import java.util.*;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> combo = new HashMap<>();
        int[] sol = new int[2];
        for (int i = 0; i < nums.length; i++){
            if (combo.containsKey(target - nums[i])) {
                sol[0] = i;
                sol[1] = combo.get(target-nums[i]);
            }
            combo.put(nums[i], i);
        }
        return sol;
    }
}