class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start{0};
        int end{0};
        int sol{0};
        while(end < nums.size()){
            if(nums[end]==0)
                k--;
            while(k < 0){
                if(nums[start]==0) k++;
                start++;
            }
            sol=max(sol,end-start+1);
            end++;
        }
        return sol;
    }
};