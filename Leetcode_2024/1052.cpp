class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int total = 0;
        if (minutes >= grumpy.size()){
            for (int i = 0; i < customers.size(); i++){
                total += customers[i];
            }
            return total;
        }
        int temp = 0;
        for (int i = 0; i < customers.size(); i++){
            if (grumpy[i] == 0){
                total += customers[i];
                customers[i] = 0;
            }
        }
        for (int i = 0; i < minutes-1; i++){
            temp += customers[i];
        }
        int most = 0;
        for (int i = minutes-1; i < customers.size(); i++){
            temp += customers[i];
            if (temp > most) most = temp;
            temp -= customers[i-minutes+1];
        }
        return (total+most);
    }
};