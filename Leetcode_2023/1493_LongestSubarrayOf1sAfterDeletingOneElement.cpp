class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int sol{0};
        vector<int> distance;
        int total{0};
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 1) total++;
            else if (nums[i] == 0){
                distance.push_back(total);
                total = 0;
            }
        }
        if (nums[nums.size()-1] == 1) distance.push_back(total);
        if (distance.size() == 1) return nums.size()-1;
        else{
            for (int i = 0; i < distance.size()-1; i++){
                if (distance[i]+distance[i+1] > sol) sol = distance[i]+distance[i+1];
            }
        }
        return sol;
    }
};