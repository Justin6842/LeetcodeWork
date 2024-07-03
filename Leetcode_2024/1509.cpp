class Solution {
public:
    int minDifference(vector<int>& nums){
        if (nums.size() < 5) return 0;
        sort(nums.begin(), nums.end());
        int j = nums.size()-4;
        int sol = nums[j]-nums[0];
        for (int i = 1; i < 4; i++){
            sol = min(sol, nums[j+i]-nums[i]);
        }
        return sol;
    }
};