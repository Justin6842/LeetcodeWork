class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> sol;
        for (int i = 0; i < asteroids.size(); i++){
            if(asteroids.at(i) < 0){
                while (!(sol.size() == 0 || sol.back() < 0)){
                    if (sol.back() >= abs(asteroids.at(i))) break;
                    sol.pop_back();
                }
                if (sol.size() > 0 && sol.back() == abs(asteroids.at(i))) sol.pop_back();
                else if (sol.size() == 0 || sol.back() < 0) sol.push_back(asteroids.at(i));
            }
            else{sol.push_back(asteroids.at(i));}
        }
        return sol;
    }
};