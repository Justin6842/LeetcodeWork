class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sol = 0;
        sort(happiness.begin(), happiness.end());
        for (int i = 0; i < k; i++){
            if (happiness[happiness.size()-i-1]-i <= 0) break;
            sol += happiness[happiness.size()-i-1]-i;
        }
        return sol;
    }
};