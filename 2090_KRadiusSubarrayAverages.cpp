class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> sol(nums.size(), -1);
        if (nums.size() < 1+2*k) return sol;
        long total{0};
        for (int i = 0; i < 1+2*k; i++){
            total += nums[i];
        }
        sol[k] = total/(1+2*k);
        for (int i = k+1; i < nums.size()-k; i++){
            total -= nums[i-k-1];
            total += nums[i+k];
            sol[i] = total/(1+2*k);
        }
        return sol;
    }
};