class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors(1,1);
        for (int i = 2; i < n+1; i++){
            if (n%i == 0) factors.push_back(i);
        }
        if (k > factors.size()) return -1;
        else{
            return factors[k-1];
        }
    }
};