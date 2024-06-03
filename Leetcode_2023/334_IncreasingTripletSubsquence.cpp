class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) return false;
        int mid {INT_MAX};
        int big {nums[nums.size()-1]};
        for (int i = nums.size()-2; i > -1; i--){
            if (nums[i] >= big) big = nums[i];
            else if (nums[i] >= mid || mid == INT_MAX) mid = nums[i];
            else{
                return true;
            }
        }
        return false;
    }
};