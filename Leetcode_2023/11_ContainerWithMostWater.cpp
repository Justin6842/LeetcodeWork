class Solution {
public:
    int maxArea(vector<int>& height) {
        int left {0};
        int right = height.size()-1;
        int sol {0};
        int max {0};
        while (left < right){
            max = min(height[left], height[right])*(right-left);
            if (max > sol) sol = max;
            if (height[left] <= height[right]) left++;
            else{right--;}
        }
        return sol;
    }
};