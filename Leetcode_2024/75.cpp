#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); i++){
            index[nums[i]]++;
        }
        for (int i = 0; i < index[0]; i++){
            nums[i] = 0;
        }
        for (int i = index[0]; i < index[0]+index[1]; i++){
            nums[i] = 1;
        }
        for (int i = index[0]+index[1]; i < nums.size(); i++){
            nums[i] = 2;
        }
    }
};