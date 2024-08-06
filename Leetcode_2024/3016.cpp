class Solution {
public:
    int minimumPushes(string word) {
        vector<int> alphabet(26, 0);
        for (int i = 0; i < word.length(); i++){
            alphabet[word[i]-'a']++;
        }
        sort(alphabet.begin(), alphabet.end(), greater<int>());
        int sol = 0;
        for (int i = 0; i < alphabet.size(); i++){
            if (alphabet[i] == 0) break;
            sol += alphabet[i]*(i/8+1);
        }
        return sol;
    }
};