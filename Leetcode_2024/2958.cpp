class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        int res = 0, sol = 0, left = 0;
        for (int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
            sol++;
            while(umap[nums[i]] > k && left != nums.size()){
                umap[nums[left]]--;
                left++;
                sol--;
            }
            if (sol > res) res = sol;
        }
        return res;
    }
};