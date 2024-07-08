#include <vector>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> circle;
        for (int i = 1; i <= n; i++){
            circle.push_back(i);
        }
        int lastSpot = 0;
        while (circle.size() > 1){
            lastSpot += (k-1);
            lastSpot %= circle.size();
            circle.erase(circle.begin()+lastSpot);
        }
        return circle[0];
    }
};