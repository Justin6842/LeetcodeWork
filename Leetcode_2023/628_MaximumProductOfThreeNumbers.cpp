class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sol = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int solLeft = (nums[nums.size()-1]*nums[0]*nums[1]);
        return max(sol, solLeft);
    }
};