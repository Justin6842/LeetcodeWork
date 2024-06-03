class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> sol (temperatures.size(), 0);
        for (int i = temperatures.size()-2; i > -1; i--){
            int temp = i+1;
            while (temp < sol.size()){
                if (temperatures[temp] > temperatures[i]){
                    sol[i] = temp-i;
                    break;
                }
                else if (sol[temp] == 0) break;
                else{ temp += sol[temp]; }
            }
        }
        return sol;
    }
};