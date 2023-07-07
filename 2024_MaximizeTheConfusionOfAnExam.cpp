class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int sol{1};
        int tCount{0};
        int fCount{0};
        int start{0};
        int end{0};
        while (end < answerKey.length()){
            if (answerKey[end] == 'T') tCount++;
            else{ fCount++; }
            if (tCount > k && fCount > k){
                if (end-start > sol) sol = end-start;
                while (tCount > k && fCount > k){
                    if (answerKey[start] == 'T') tCount--;
                    else{ fCount--; }
                    start++;
                }
            }
            end++;
        }
        if (end-start > sol) sol = end-start;
        return sol;
    }
};