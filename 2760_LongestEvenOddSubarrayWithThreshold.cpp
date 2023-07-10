class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int left{0};
        int right{0};
        int sol{0};
        while (left < nums.size()){
            if (nums[left]%2 == 0 && nums[left] <= threshold){
                right = left;
                while (right < nums.size()-1){
                    if (nums[right]%2 == nums[right+1]%2 || nums[right+1] > threshold) break;
                    right++;
                }
                sol = max(sol, right-left+1);
                left = right+1;
            }
            else{
                left++;
            }
        }
        return sol;
    }
};