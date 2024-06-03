class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sol{0};
        int start{-1};
        for (int i = 0; i < prices.size()-1; i++){
            if (start == -1 && prices[i+1] >= prices[i]) start = i;
            else if (start != -1 && prices[i+1] < prices[i]){
                sol += prices[i]-prices[start];
                start = -1;
            }
        }
        if (start != -1) sol += prices[prices.size()-1]-prices[start];
        return sol;
    }
};