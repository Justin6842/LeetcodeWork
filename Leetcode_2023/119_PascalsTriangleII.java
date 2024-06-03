import java.util.*;
class Solution {
    public List<Integer> getRow(int rowIndex) {
        int[] sol = new int[1+rowIndex];
        sol[0] = 1;
        int templ = 0, tempr = 0;
        for (int k = 1; k < rowIndex+1; k++){
            for (int i = 1; i < (k+1); i++){
                if (i == 1) templ = 1;
                if (i == k) sol[i] = 1;
                else{
                    tempr = sol[i];
                    sol[i] = templ + sol[i];
                    templ = tempr;
                }
            }
        }
        List<Integer> res = new ArrayList<Integer>();
        for (int i = 0; i < sol.length; i++){
            res.add(sol[i]);
        }
        return res;
    }
}