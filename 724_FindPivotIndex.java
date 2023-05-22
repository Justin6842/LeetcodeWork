class Solution {
    public int pivotIndex(int[] nums) {
        int rSum = 0, lSum = 0;
        for (int i = 0; i < nums.length; i++){
            rSum += nums[i];
        }
        for (int i = 0; i < nums.length; i++){
            if (i == 0){
                rSum -= nums[i];
            }
            else{
                lSum += nums[i-1];
                rSum -= nums[i];
            }
            if (lSum == rSum){
                rSum = i;
                break;
            }
            else if (i == nums.length-1) rSum = -1;
        }
        return rSum;
    }
}