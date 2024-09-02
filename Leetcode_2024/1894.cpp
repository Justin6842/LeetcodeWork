class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k){
        if (chalk[0] > k ) return 0;
        for (int i = 1; i < chalk.size(); i++){
            chalk[i] += chalk[i-1];
            if (chalk[i] > k) return i;
        }
        k %= chalk[chalk.size()-1];
        for (int i = 0; i < chalk.size(); i++){
            if (k < chalk[i]) return i;
        }
        return -1;
    }
};