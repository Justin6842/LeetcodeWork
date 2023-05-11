class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        if (nums.length < k) k = nums.length;
        HashSet<Integer> se = new HashSet<Integer>();
        for(int i = 0; i < k; i++){
            se.add(nums[i]);
        }
        if (se.size() < k) return true;
        for (int i = k; i < nums.length; i++){
            se.add(nums[i]);
            if (se.size() <= k) return true;
            se.remove(nums[i-k]);
        }
        return false;
    }
}