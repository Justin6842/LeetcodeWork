class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> alp(26,0);
        for (int i = 0; i < moves.length(); i++){
            alp[(int)moves.at(i)-'A']++;
        }
        return ((alp[3] == alp[20])&&(alp[11]==alp[17]));
    }
};