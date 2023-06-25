class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> vals;
        for (int i = 0; i < nums.size(); i++){
            vals.insert(nums[i]);
        }
        int j{0};
        for (auto& num : vals) {
            nums[j] = num;
            j++;
        }
        if (vals.size() == 1) return nums[0];
        if (vals.size() == 2) return max(nums[0], nums[1]);
        return nums[vals.size()-3];
    }
};