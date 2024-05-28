class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int sol = 0;
        int total = 0;
        int left = 0;
        vector<int> absolute(s.length(), 0);
        for (int i = 0; i < s.length(); i++){
            absolute[i] = abs(s[i]-t[i]);
            total += absolute[i];
            while(total > maxCost){
                total -= absolute[left++];
            }
            sol = max(sol, (i-left+1));
        }
        return sol;
    }
};