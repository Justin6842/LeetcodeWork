class Solution {
public:
    bool canJump(vector<int>& nums) {
        int most = nums[0];
        for (int i = 0; i <= most; i++){
            if (most >= nums.size()-1) return true;
            most = max(most, nums[i]+i);
        }
        return false;
    }
};