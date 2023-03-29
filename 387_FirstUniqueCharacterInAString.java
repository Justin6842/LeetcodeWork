import java.util.*;
class Solution {
    public int firstUniqChar(String s) {
        int[] n = new int[26];
        for (int i = 0; i < n.length; i++){
            n[i] = -1;
        }
        for (int i = 0; i < s.length(); i++){
            if (n[s.charAt(i)-'a'] != -1) n[s.charAt(i)-'a'] = 100000;
            else if (n[s.charAt(i)-'a'] == -1) n[s.charAt(i)-'a'] = i;
        }
        int sol = 100000;
        for (int i = 0; i < n.length; i++){
            if (n[i] != -1 && n[i] < sol) sol = n[i];
        }
        if (sol == 100000) return -1;
        else{
            return sol;
        }
    }
}