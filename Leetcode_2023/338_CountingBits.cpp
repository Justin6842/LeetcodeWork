#include <vector>;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sol;
        for (int i = 0; i < n+1; i++){
            int x = i;
            int ones{0};
            while (x != 0){
                ones += x%2;
                x /= 2;
            }
            sol.push_back(ones);
        }
        return sol;
    }
};