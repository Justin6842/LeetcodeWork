class Solution {
public:
    bool isChar(string& s, int i){
        if (s[i] >= '0' && s[i] <= '9') return true;
            else if (s[i] >= 'a' && s[i] <= 'z') return true;
            else if (s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = (char)(s[i]+32);
                return true;
            }
            return false;
    }
    bool isPalindrome(string s) {
        int i{0};
        int j = s.length()-1;
        while (i < j){
            if (isChar(s, i)){
                while (!isChar(s, j)){
                    j--;
                }
                if (j <= i) break;
                if (s[i] != s[j]) return false;
                j--;
                i++;
            }
            else{ i++; }
        }
        return true;
    }
};