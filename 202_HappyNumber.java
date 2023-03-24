import java.util.*;
class Solution {
    public boolean isHappy(int n) {
        Set<Integer> s = new HashSet<Integer>();
        int setsize = 0;
        while (true){
            n = cal(n);
            if (n == 1) return true;
            setsize++;
            s.add(n);
            if (setsize != s.size()) break;
        }
        return false;
    }
    private int cal(int x){
        int sol = 0;
        while (x > 0){
            sol += Math.pow((x%10),2);
            x /= 10;
        }
        return sol;
    }
}