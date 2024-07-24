#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> sol;
        vector<int> sorter;
        for (int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            int nextTemp = 0;
            if (temp == 0) nextTemp = mapping[0];
            else{
                int factor = 1;
                while (temp != 0){
                    nextTemp += factor*mapping[temp%10];
                    factor *= 10;
                    temp /= 10;
                }
            }
            if (sol.size() == 0){
                sol.push_back(nums[i]);
                sorter.push_back(nextTemp);
            }
            else if (sorter[sorter.size()-1] <= nextTemp){
                sol.push_back(nums[i]);
                sorter.push_back(nextTemp);
            }
            else{
                int j = 0;
                int k = sol.size()-1;
                while (j < k){
                    int mid = (j+k)/2;
                    if (sorter[mid] <= nextTemp){
                        j = mid+1;
                    }
                    else{
                        k = mid;
                    }
                }
                sol.insert(sol.begin()+j, nums[i]);
                sorter.insert(sorter.begin()+j, nextTemp);
            }
        }
        return sol;
    }
};