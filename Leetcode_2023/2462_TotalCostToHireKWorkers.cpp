class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long sol{0};
        priority_queue<int> queL;
        priority_queue<int> queR;
        queL.push(INT_MIN);
        queR.push(INT_MIN);
        for (int i = 0; i < candidates; i++){
            queL.push(costs[i]*-1);
        }
        int left = candidates-1;
        int right = costs.size()-1;
        while (right > left && right >= costs.size()-candidates){
            queR.push(costs[right]*-1);
            right--;
        }
        for (int i = 0; i < k; i++){
            if (queL.top() >= queR.top()){
                sol += queL.top()*-1;
                queL.pop();
                if (left < right){
                    left++;
                    queL.push(costs[left]*-1);
                }
            }
            else{
                sol += queR.top()*-1;
                queR.pop();
                if (left < right){
                    queR.push(costs[right]*-1);
                    right--;
                }
            }
        }
        return sol;
    }
};