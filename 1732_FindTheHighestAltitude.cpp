class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sol {0};
        int total {0};
        for (int i = 0; i < gain.size(); i++){
            total += gain[i];
            if (total > sol) sol = total;
        }
        return sol;
    }
};