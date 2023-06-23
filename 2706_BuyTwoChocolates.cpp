class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int x = money-prices[0]-prices[1];
        if (x < 0) return money;
        return x;
    }
};