class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp = nums.size();
        for (int i = 0; i < nums.size(); i++){
            if (i > 1){
                if (nums[i] >= temp && nums[i-1] < temp) return temp;
            }
            else{
                if (nums[i] >= temp) return temp;
            }
            temp--;
        }
        return -1;
    }
};