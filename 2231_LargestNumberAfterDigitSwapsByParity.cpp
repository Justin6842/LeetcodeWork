class Solution {
public:
    int largestInteger(int num) {
        vector<int> index (10,0);
        vector<bool> numplace(10,0);
        int digits{0};
        while(num > 0){
            int x = num%10;
            index[x]++;
            cout << x;
            if (x%2 == 1) numplace[digits] = true;
            num /= 10;
            digits++;
        }
        int sol{0};
        for (int i = 0; i < digits; i++){
            if (numplace[digits-i-1]){
                int j{9};
                while (j > -1){
                    if (index[j] > 0){
                        sol = sol*10+j;
                        index[j]--;
                        break;
                    }
                    j -= 2;
                }
            }
            else{
                int j{8};
                while (j > -1){
                    if (index[j] > 0){
                        sol = sol*10+j;
                        index[j]--;
                        break;
                    }
                    j -= 2;
                }
            }
        }
        return sol;
    }
};