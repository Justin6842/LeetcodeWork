import java.util.*;
class Solution {
    public String addStrings(String num1, String num2) {
        String sol = "0"; 
        int s = 0;
        int p1 = num1.length()-1, p2 = num2.length()-1;
        while (p1 > -1 && p2 > -1){
            s = ((num1.charAt(p1)-'0')+(num2.charAt(p2)-'0')+(sol.charAt(0)-'0'));
            sol = sol.substring(1, sol.length());
            if (s < 10) sol = "0"+String.valueOf(s)+sol;
            else{
                sol = String.valueOf(s)+sol;
            }
            p1--;
            p2--;
        }
        while (p1 > -1){
            s = ((num1.charAt(p1)-'0')+(sol.charAt(0)-'0'));
            sol = sol.substring(1, sol.length());
            if (s < 10) sol = "0"+String.valueOf(s)+sol;
            else{
                sol = String.valueOf(s)+sol;
            }
            p1--;
        }
        while (p2 > -1){
            s = ((num2.charAt(p2)-'0')+(sol.charAt(0)-'0'));
            sol = sol.substring(1, sol.length());
            if (s < 10) sol = "0"+String.valueOf(s)+sol;
            else{
                sol = String.valueOf(s)+sol;
            }
            p2--;
        }
        if (sol.charAt(0) == '0') sol = sol.substring(1, sol.length());
        return sol;
    }
}