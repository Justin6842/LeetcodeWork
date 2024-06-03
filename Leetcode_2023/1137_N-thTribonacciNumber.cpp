class Solution {
public:
    int tribonacci(int n) {
        vector<int> form(40, 0);
        form[1] = 1;
        form[2] = 1;
        for (int i = 3; i < n+1; i++){
            form[i] = form[i-1] + form[i-2] + form[i-3];
        }
        return form[n];
    }
};