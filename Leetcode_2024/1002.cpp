class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> alph;
        for (int i = 0; i < words[0].length(); i++){
            alph[words[0][i]]++;
        }
        for (int i = 1; i < words.size(); i++){
            unordered_map<char, int> word;
            for (int j = 0; j < words[i].length(); j++){
                word[words[i][j]]++;
            }
            for (const auto& pair : alph){
                alph[pair.first] = min(alph[pair.first], word[pair.first]);
            }
        }
        vector<string> sol;
        for (const auto& pair : alph){
            string temp(1, pair.first);
            for (int i = 0; i < pair.second; i++){
                sol.push_back(temp);
            }
        }
        return sol;
    }
};