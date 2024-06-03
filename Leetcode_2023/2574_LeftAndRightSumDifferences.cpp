class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums){
        vector<int> left(nums.size(),0);
        vector<int> right(nums.size(),0);
        for (int i = 1; i < nums.size(); i++){
            left[i] = left[i-1]+nums[i-1];
        }
        for (int i = nums.size()-2; i > -1; i--){
            right[i] = right[i+1]+nums[i+1];
        }
        vector<int> sol(nums.size(), 0);
        for (int i = 0; i < left.size(); i++){
            sol[i] = abs(left[i]-right[i]);
        }
        return sol;
    }
};