import java.util.*;
class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;
        int[] total = new int[26];
        for (int i = 0; i < s.length(); i++){
            total[s.charAt(i)-'a']++;
            total[t.charAt(i)-'a']--;
        }
        for (int i = 0; i < total.length; i++){
            if (total[i] != 0) return false;
        }
        return true;
    }
}