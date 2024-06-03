class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> tabs(nums.size(), true);
        vector<int> sol;
        for (int i = 0; i < nums.size(); i++){
            tabs[nums[i]-1] = false;
        }
        for (int i = 0; i < nums.size(); i++){
            if (tabs[i]) sol.push_back(i+1);
        }
        return sol;
    }
};