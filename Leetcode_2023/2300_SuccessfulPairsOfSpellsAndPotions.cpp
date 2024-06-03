class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> sol;
        sort(potions.begin(), potions.end());
        int potSize = potions.size();
        for (int i = 0; i < spells.size(); i++){
            long long temp = spells[i];
            int low{0};
            int high = potSize-2;
            while (high > -1 && low < potSize-1){
                int mid = (low+high)/2;
                if (temp*potions[mid] < success){
                    if (temp*potions[mid+1] >= success){
                        sol.push_back(potSize-1-mid);
                        break;
                    }
                    else{ low = mid+1;}
                }
                else{ high = mid-1;}
            }
            if (high == -1) sol.push_back(potSize);
            else if (low == potSize-1) sol.push_back(0);
        }
        return sol;
    }
};