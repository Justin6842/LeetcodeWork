class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> zeroR;
        unordered_set<int> zeroC;
        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[0].size(); j++){
                if (matrix[i][j] == 0){
                    zeroR.insert(i);
                    zeroC.insert(j);
                }
            }
        }
        for (int i: zeroR){
            for (int j = 0; j < matrix[0].size(); j++){
                matrix[i][j] = 0;
            }
        }
        for (int i: zeroC){
            for (int j = 0; j < matrix.size(); j++){
                matrix[j][i] = 0;
            }
        }
    }
};