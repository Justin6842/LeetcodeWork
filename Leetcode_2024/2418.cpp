#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> copy(heights.size(), 0);
        vector<string> result(names.size(), "");
        for (int i = 0; i < heights.size(); i++){
            copy[i] = heights[i];
        }
        sort(copy.begin(), copy.end(), greater<>());
        for (int k = 0; k < names.size(); k++){
            int i = 0; 
            int j = heights.size();
            while(i < j){
                int mid = (i+j)/2;
                if (copy[mid] == heights[k]){
                    i = mid;
                    break;
                }
                else if (copy[mid] > heights[k]){
                    i = mid+1;
                }
                else{
                    j = mid-1;
                }
            }
            result[i] = names[k];
        }
        return result;
    }
};