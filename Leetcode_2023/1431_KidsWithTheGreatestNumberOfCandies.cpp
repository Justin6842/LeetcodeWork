class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max {0};
        max = *max_element(candies.begin(),candies.end());
        vector<bool> sol (candies.size(), false);
        for (int i = 0; i < sol.size(); i++){
            if (candies[i]+extraCandies >= max) sol[i] = true;
        }
        return sol;
    }
};