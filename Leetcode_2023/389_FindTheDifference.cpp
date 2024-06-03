class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>index(26,0);
        index[t.at(0)-'a']++;
        for (int i = 0; i < s.length(); i++){
            index[t.at(i+1)-'a']++;
            index[s.at(i)-'a']--;
        }
        int sol{0};
        for (int i = 0; i < index.size(); i++){
            if (index[i] > 0){
                sol = i;
                break;
            }
        }
        return (char)('a'+sol);
    }
};