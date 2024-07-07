class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        while (numBottles/numExchange != 0){
            int temp = numBottles/numExchange;
            total += temp;
            numBottles -= temp*(numExchange-1);
        }
        return total;
    }
};