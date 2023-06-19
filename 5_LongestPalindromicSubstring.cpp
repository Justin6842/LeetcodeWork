class Solution {
public:
    int substring(string s, int curLef, int curRig){
        while (true){
                if (curLef-1 == -1 || curRig+1 == s.length()) break;
                if (s.at(curLef-1) != s.at(curRig+1)) break;
                curLef--;
                curRig++;
        }
        return curLef;
    }
    string longestPalindrome(string s) {
        int solLef{0};
        int solLen{1};
        int curLef;
        int curLen;
        for (int i = 0; i < s.length()-1; i++){
            curLef = substring(s, i, i);
            curLen = 2*(i-curLef)+1;
            if (curLen > solLen){
                solLen = curLen;
                solLef = curLef;
            }
            if (i < s.length()-1 && s.at(i) == s.at(i+1)){
                curLef = substring(s, i, i+1);
                curLen = 2*(i-curLef)+2;
                if (curLen > solLen){
                    solLen = curLen;
                    solLef = curLef;
                }
            }
        }
        return s.substr(solLef, solLen);
    }
};