import java.util.*;
class Solution {
    public String multiply(String num1, String num2) {
        int[] c = new int[num1.length()+num2.length()];
        int digit1 = 0, digit2 = 0;
        for (int i = num1.length()-1; i > -1; i--){
            digit2 = 0;
            for (int j = num2.length()-1; j > -1; j--){
                c[c.length-1-digit1-digit2] += (num1.charAt(i)-'0')*(num2.charAt(j)-'0');
                digit2++;
            }
            digit1++;
        }
        for (int i = c.length-1; i > -1; i--){
            if (c[i] > 9){
                c[i-1] += c[i]/10;
                c[i] = c[i]%10;
        }
        }
        String sol = "";
        for (int i = 0; i < c.length; i++){
            if (sol.length() == 0 && c[i] == 0) continue;
            else{
                sol = sol + String.valueOf(c[i]);
            }
        }
        if (sol.length() == 0) sol = sol + '0';
        return sol;
    }
}