class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int val {0};
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                nums[val++] = nums[i];
            }
        }
        for (int i = val; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};