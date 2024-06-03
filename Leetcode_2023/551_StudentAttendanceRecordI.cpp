class Solution {
public:
    bool checkRecord(string s) {
        bool abs{false};
        int late{0};
        for (int i = 0; i < s.length(); i++){
            if (s.at(i) == 'L'){
                late++;
                if (late >= 3) return false;
                continue;
            }
            else if (s.at(i) == 'A'){
                if (abs) return false;
                else{
                    abs = true;
                }
            }
            late = 0; 
        }
        return true;
    }
};