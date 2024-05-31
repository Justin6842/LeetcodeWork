class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int sum = 0, a, b;
        for (int i = 0; i < arr.size()-1; i++){
            a = 0;
            for (int j = i+1; j < arr.size(); j++){
                a ^= arr[j-1];
                b = 0;
                for (int k = j; k < arr.size(); k++){
                    b ^= arr[k];
                    if (b == a) sum++;
                }
            }
        }
        return sum;
    }
};