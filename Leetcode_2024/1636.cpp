#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        vector<int> result;
        for (const auto& x: count){
            if (result.size() == 0){
                for (int i = 0; i < x.second; i++){
                    result.push_back(x.first);
                }
            }
            else{
                int i = 0;
                while(i <= result.size()){
                    if (i == result.size()){
                        for (int i = 0; i < x.second; i++){
                            result.push_back(x.first);
                        }
                        break;
                    }
                    else if (x.second < count[result[i]] || (x.second == count[result[i]] && x.first > result[i])){
                        for (int j = 0; j < x.second; j++){
                            result.insert(result.begin()+i, x.first);
                        }
                        break;
                    }
                    else{
                        i += count[result[i]];
                    }
                }
            }
        }
        return result;
    }
};