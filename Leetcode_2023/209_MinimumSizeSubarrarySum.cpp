class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sol{0};
        int left{0};
        int right{0};
        int sum = nums[0];
        while (right != nums.size()-1){
            if (sum >= target){
                while (sum >= target){
                    if (sol == 0) sol = right-left+1;
                    else if (right-left+1 < sol) sol = right-left+1;
                    sum -= nums[left];
                    left++;
                }
            }
            else{
                right++;
                sum += nums[right];
            }
        }
        if (sum >= target){
                while (sum >= target){
                    if (sol == 0) sol = right-left+1;
                    else if (right-left+1 < sol) sol = right-left+1;
                    sum -= nums[left];
                    left++;
                }
            }
        return sol;
    }
};