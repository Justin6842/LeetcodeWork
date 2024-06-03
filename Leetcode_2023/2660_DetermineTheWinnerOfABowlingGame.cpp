class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sol = player1[0] - player2[0];
        if (player1.size() > 1){
            sol += player1[1] - player2[1];
            if (player1[0] == 10) sol += player1[1];
            if (player2[0] == 10) sol -= player2[1];
        }
        for (int i = 2; i < player1.size(); i++){
            sol += (player1[i]-player2[i]);
            if (player1[i-1] == 10 || player1[i-2] == 10) sol += player1[i];
            if (player2[i-1] == 10 || player2[i-2] == 10) sol -= player2[i];
        }
        if (sol > 0) return 1;
        else if (sol < 0) return 2;
        return sol;
    }
};