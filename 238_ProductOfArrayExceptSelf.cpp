class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol (nums.size(), 1);
        vector<int> sample (nums.size());
        for (int i = 0; i < nums.size(); i++){
            sample[i] = nums[i];
        }
        int total = 1;
        for (int i = 0; i < nums.size(); i++){
            sol[i] *= total;
            total *= sample[i];
        }
        total = 1;
        for (int i = nums.size()-1; i > -1; i--){
            sol[i] *= total;
            total *= sample[i];
        }
        return sol;
    }
};