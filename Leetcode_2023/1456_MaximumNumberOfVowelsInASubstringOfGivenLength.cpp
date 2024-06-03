class Solution {
public:
    int maxVowels(string s, int k) {
        int vowel {0};
        int sol {0};
        for (int i = 0; i < k; i++){
            if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u') vowel++;
        }
        sol = max(sol, vowel);
        for (int i = k; i < s.length(); i++){
            if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u') vowel++;
            if (s.at(i-k) == 'a' || s.at(i-k) == 'e' || s.at(i-k) == 'i' || s.at(i-k) == 'o' || s.at(i-k) == 'u') vowel--;
            sol = max(sol, vowel);
        }
        return sol;
    }
};