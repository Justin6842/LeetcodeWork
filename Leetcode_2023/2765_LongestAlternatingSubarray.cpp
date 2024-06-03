class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int sol{-1};
        int left{0};
        int i{1};
        while(i < nums.size()){
            if(nums[i] == nums[left]+1){
                while(i < nums.size()-1){
                    if (nums[i+1] != nums[left] && nums[i+1] != nums[left]+1) break;
                    else if (nums[i] == nums[i+1]) break;
                    i++;
                }
                sol = max(sol, i-left+1);
            }
            left = i;
            i++;
        }
        return sol;        
    }
};