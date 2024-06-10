#include <iostream> 
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights){
        vector<int> copy;
        copy = heights;
        sort(copy.begin(), copy.end());
        int sum = 0;
        for (int i = 0; i < heights.size(); i++){
            if (copy[i] != heights[i]) sum++;
        }
        return sum;
    }
};