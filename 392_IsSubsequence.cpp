class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp {0};
        int tp {0};
        while (sp < s.length() && tp < t.length()){
            if (s.at(sp) == t.at(tp)){
                sp++;
            }
            tp++;
        }
        return (sp == s.length());
    }
};