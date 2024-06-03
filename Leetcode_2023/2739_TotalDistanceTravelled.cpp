class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int sol{0};
        while(mainTank >= 5 && additionalTank){
            sol += 50;
            mainTank -= 4;
            additionalTank--;
        }
        sol += 10*mainTank;
        return sol;
    }
};