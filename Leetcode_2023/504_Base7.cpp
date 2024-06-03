class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        string sol = "";
        bool neag {false};
        if (num < 0){
            neag = true;
            num -= num*2;
        }
        int pow {1};
        while (num > 0){
            int x = num%7;
            sol = (char)(x+48) + sol;
            num -= x;
            num /= 7;
        }
        if (neag){
            sol = '-' + sol;
        }
        return sol;
    }
};