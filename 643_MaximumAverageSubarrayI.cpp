class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int window = {0};
        int sol = INT_MIN;
        for (int i = 0; i < k; i++){
            window += nums[i];
        }
        sol = max(sol, window);
        for (int i = k; i < nums.size(); i++){
            window -= nums[i-k];
            window += nums[i];
            sol = max(sol, window);
        }
        return ((double)sol/k);
    }
};