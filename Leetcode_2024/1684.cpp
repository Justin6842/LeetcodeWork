class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> char_allowed;
        for (int i = 0; i < allowed.length(); i++){
            char_allowed[allowed[i]] = 1;
        }
        int total = words.size();
        for (int i = 0; i < words.size(); i++){
            for (int j = 0; j < words[i].length(); j++){
                if (char_allowed.find(words[i][j]) == char_allowed.end()){
                    total--;
                    break;
                }
            }
        }
        return total;
    }
};