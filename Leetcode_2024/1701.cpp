#include <vector>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double total = 0;
        int start = 1;
        for (int i = 0; i < customers.size(); i++){
            start = max(start, customers[i][0]) + customers[i][1];
            total += start - customers[i][0];
        }
        return (total/customers.size());
    }
};