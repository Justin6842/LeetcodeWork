class Solution {
public:
    int passThePillow(int n, int time) {
        time %= ((n-1)*2);
        if (time >= n){
            return n-(time-n+1);
        }
        else{
            return time+1;
        }
    }
};