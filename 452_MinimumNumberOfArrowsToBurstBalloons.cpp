class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int sol{1};
        sort(points.begin(), points.end(), comp);
        int aim = points[0][1];
        for (int i = 1; i < points.size(); i++){
            if (points[i][0] > aim){
                sol++;
                aim = points[i][1];
            }
        }
        return sol;
    }
};