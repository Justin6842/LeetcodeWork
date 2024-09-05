class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        mean *= (rolls.size()+n);
        for (int i = 0; i < rolls.size(); i++){
            mean -= rolls[i];
        }
        vector<int> sol;
        if (mean/n < 1 || (mean+n-1)/n > 6) return sol;
        int temp = mean/n;
        mean -= (temp*n);
        for (int i = 0; i < n; i++){
            sol.push_back(temp);
        }
        for (int i = 0; i < mean; i++){
            sol[i]++;
        }
        return sol;
    }
};