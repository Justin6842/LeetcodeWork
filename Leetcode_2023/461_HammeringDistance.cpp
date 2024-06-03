class Solution {
public:
    int hammingDistance(int x, int y) {
        int sol{0};
        while (x > 0 || y > 0){
            if (x == 0 && y%2 == 1) sol++;
            else if (y == 0 && x&2 == 1) sol++;
            else if (x%2 != y%2) sol++;
            x /= 2;
            y /= 2;
        }
        return sol;
    }
};