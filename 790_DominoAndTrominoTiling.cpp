class Solution {
public:
    int numTilings(int n) {
        vector<long> pattern(1000, 0);
        pattern[0] = 1;
        pattern[1] = 2;
        pattern[2] = 5;
        for (int i = 3; i < n; i++){
            pattern[i] = (2*pattern[i-1]+pattern[i-3])%(1000000007);
        }
        return pattern[n-1];
    }
};