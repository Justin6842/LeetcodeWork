class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int sol{0};
        int k{0};
        int c{0};
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (k < g.size() && c < s.size()){
            if (s[c] >= g[k]){
                sol++;
                k++;
            }
            c++;
        }
        return sol;
    }
};