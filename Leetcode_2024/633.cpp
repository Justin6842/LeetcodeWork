class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_map<int, int> index;
        for (long i = 0; i*i <= c; i++){
            index[c-(i*i)] = 1;
        }
        for (long i = 0; i*i <= c; i++){
            if (index[i*i] == 1) return true;
        }
        return false;
    }
};