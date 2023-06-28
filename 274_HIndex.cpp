class Solution {
public:
    int min(int x, int y){
        if (x < y) return x;
        return y;
    }
    int hIndex(vector<int>& citations){
        sort(citations.begin(), citations.end());
        int max = min(citations.size(), 1000);
        for (int i = max; i > 0; i--){
            if (citations[citations.size()-i] >= i) return i;
        }
        return 0;
    }
};