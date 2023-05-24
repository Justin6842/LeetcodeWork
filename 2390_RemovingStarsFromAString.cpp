class Solution {
public:
    string removeStars(string s) {
        string sol = "";
        for (int i = 0; i < s.length(); i++){
            if (s.at(i) == '*') sol.pop_back();
            else{sol.push_back(s.at(i));}
        }
        return sol;
    }
};