import java.util.*;
class Solution {
    public int maxProfit(int[] prices) {
        int x = 0, smallest = Integer.MAX_VALUE, sol = 0;
        for (int i = 0; i < prices.length; i++){
            if (prices[i] < smallest) smallest = prices[i];
            if (prices[i]-smallest > sol) sol = prices[i]-smallest;
        }
        return sol;
    }
}