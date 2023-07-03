class Solution {
public:
    int minFlips(int a, int b, int c) {
        int sol{0};
        while (a != 0 || b != 0 || c != 0){
            int x = a%2;
            int y = b%2;
            int z = c%2;
            if (x == 0 && y == 0 && z == 1) sol++;
            else if (x == 1 && y == 1 && z == 0) sol += 2;
            else if ((x == 1 || y == 1) && z == 0) sol++;
            a /= 2;
            b /= 2;
            c /= 2;

        }
        return sol;
    }
};