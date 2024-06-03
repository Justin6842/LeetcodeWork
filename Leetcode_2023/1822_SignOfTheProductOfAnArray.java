class Solution {
    public int arraySign(int[] nums) {
        int sol = 1;
        for (int i = 0; i < nums.length; i++){
            if (nums[i] == 0) sol = 0;
            else if (nums[i] < 0) sol *= -1;
        }
        return sol;
    }
}