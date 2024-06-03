import java.util.*;
class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer, Integer> sol = new HashMap<Integer, Integer>();
        for (int j = 0; j < nums.length; j++){
            if (sol.containsKey(nums[j])) sol.remove(nums[j]);
            else{
                sol.put(nums[j], 1);
            }
        }
        for (int i:sol.keySet()){
            return i;
        }
        return 0;
    }
}