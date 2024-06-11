class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> index;
        for (int i = 0; i < arr1.size(); i++){
            index[arr1[i]]++;
        }
        vector<int> sol;
        for (int i = 0; i < arr2.size(); i++){
            for (int j = 0; j < index[arr2[i]]; j++){
                sol.push_back(arr2[i]);
            }
            index[arr2[i]] = 0;
        }
        vector<int> rem;
        for (auto& pair: index){
            if (pair.second > 0) rem.push_back(pair.first);
        }
        sort(rem.begin(), rem.end());
        for (int i = 0; i < rem.size(); i++){
            for (int j = 0; j < index[rem[i]]; j++){
                sol.push_back(rem[i]);
            }
        }
        return sol;
    }
};