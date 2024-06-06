class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;
        unordered_map<int, int> index;
        for (int i = 0; i < hand.size(); i++){
            index[hand[i]]++;
        }

        sort(hand.begin(), hand.end());
        int i = 0;
        while (i < hand.size()){
            int temp = index[hand[i]];
            if (temp == 0){
                i++;
                continue;
            }
            index[hand[i]] = 0;
            for(int j = 1; j < groupSize; j++){
                if (index[(hand[i]+j)] < temp) return false;
                index[(hand[i]+j)] -= temp;
            }
            i += temp;
        }
        return true;
    }
};