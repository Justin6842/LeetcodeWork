import java.util.*;
class Solution {
    public String reverseWords(String s) {
        int i = 0, j = 0;
        String sol = "";
        while (j < s.length()){
            if (s.charAt(j) == ' '){
                sol += rev(s.substring(i, j)) + " ";
                i = j+1;
            }
            j++;
        }
        sol += rev(s.substring(i, j));
        return sol;
    }
    private String rev(String s){
        String n = "";
        for (int i = s.length()-1; i > -1; i--){
            n += s.charAt(i);
        }
        return n;
    }
}