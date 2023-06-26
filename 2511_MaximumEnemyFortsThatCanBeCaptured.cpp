class Solution {
public:
    int captureForts(vector<int>& forts) {
        int sol{0};
        int left{0};
        for (int i = 0; i < forts.size(); i++){
            if (forts[i] != 0){
                left = i;
                break;
            }
        }
        int right = left+1;
        while (right < forts.size()){
            if (forts[right] != 0){
                if (forts[left]+forts[right] == 0 && right-left-1 > sol) sol = right-left-1;
                left = right; 
            }
            right++;
        }
        return sol;
    }
};