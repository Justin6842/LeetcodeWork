import java.util.*;
class Solution {
    public List<Integer> partitionLabels(String s) {
        List<Integer> sol = new ArrayList<Integer>();
        int start = 0, end = s.length()-1, sta = 0, e = s.length();
        while (start < s.length()){
            System.out.println(start);
            while(start < e){
                if (s.charAt(end) == s.charAt(start)){
                    if (e == s.length()) e = end;
                    else if (e < end) e = end;
                    end = s.length()-1;
                    start++;
                }
                else{
                    end--;
                }
            }
            sol.add(e-sta+1);
            if (e-sta+1 != 1) start++;
            sta = start;
            e = s.length();
            end = s.length()-1;

        }
        return sol;
    }
}