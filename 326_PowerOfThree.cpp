class Solution {
public:
    bool isPowerOfThree(int n) {
        while (true){
            if (n == 1) return true;
            else if (n == 0 || n%3 != 0) return false;
            n /= 3;
        }
    }
};