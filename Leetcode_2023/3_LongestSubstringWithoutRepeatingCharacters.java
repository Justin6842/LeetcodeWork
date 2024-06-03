import java.io.*;
import java.util.*;
class Solution {
    public int lengthOfLongestSubstring(String s) {
        String d = "";
        int sol = 0;

        for (int i = 0; i < s.length(); i++){
            if (d.indexOf(s.charAt(i)) != -1){
                if (d.length() > sol) sol = d.length();
                d = d.substring(d.indexOf(s.charAt(i))+1);
            }
            d += s.charAt(i);
        } 
        if (d.length() > sol) sol = d.length();
        return sol;
    }
}