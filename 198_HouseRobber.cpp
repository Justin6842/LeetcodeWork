class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        if (nums.size() > 2) nums[nums.size()-3] += nums[nums.size()-1];
        for (int i = nums.size()-4; i > -1; i--){
            nums[i] = max(nums[i]+nums[i+2], nums[i]+nums[i+3]);
        }
        return max(nums[0], nums[1]);
    }
};