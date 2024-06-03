class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n < 1) return false;
        float res = log(n)/log(4);
        return (floor(res) == res);
    }
};