class Solution {
public:
    int numSteps(string s) {
        int sol = 0;
        while (s.length() != 1){
            if ((s[s.length()-1]-'0') == 0){
                sol++;
                s.pop_back();
            }
            else{
                sol += 2;
                s.pop_back();
                for (int i = 1; i <= s.length()+1; i++){
                    if (i == (s.length()+1)){
                        s = '1' + s;
                        cout << "WOW";
                        break;
                    }
                    else if ((s[s.length()-i]-'0') == 0){
                        s[s.length()-i] = '1';
                        break;
                    }
                    s[s.length()-i] = '0';
                }
            }
        }
        return sol;
    }
};