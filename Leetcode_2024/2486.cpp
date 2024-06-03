class Solution {
public:
    int appendCharacters(string s, string t) {
        int temp = 0;
        for (int i = 0; i < s.length(); i++){
            if (temp == t.length()) return 0;
            if ((s[i]-'a') == (t[temp]-'a')) temp++;
        }
        return (t.length()-temp);
    }
};