class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        unordered_set<int> set;
        vector<int> sol;
        for (int i = 0; i < nums.size(); i++){
            set.insert(nums[i]);
        }
        for (int i = 0; i < moveFrom.size(); i++){
            set.erase(moveFrom[i]);
            set.insert(moveTo[i]);
        }
        for (auto x: set){
            sol.push_back(x);
        }
        sort(sol.begin(), sol.end());
        return sol;
    }
};