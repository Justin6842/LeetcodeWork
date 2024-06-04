class Solution {
public:
    int longestPalindrome(string s){
        int sol = 0;
        unordered_map<char, int> hash;
        for (int i = 0; i < s.length(); i++){
            hash[s[i]]++;
        }
        for (const auto& pair : hash) {
            if (sol % 2 == 0){
                if (pair.second % 2 == 1) sol++;
            }
            sol += pair.second-(pair.second % 2);
        }
        return sol;
    }
};