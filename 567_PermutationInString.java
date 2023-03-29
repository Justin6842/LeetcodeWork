import java.util.*;
class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if (s2.length() < s1.length()) return false;
        char[] c = new char[26];
        char[] s = new char[26];
        for (int i = 0; i < s1.length(); i++){
            c[s1.charAt(i)-'a']++;
            s[s2.charAt(i)-'a']++;
        }
        if (similar(c, s)) return true;
        for (int i = s1.length(); i < s2.length();  i++){
            s[s2.charAt(i)-'a']++;
            s[s2.charAt(i-s1.length())-'a']--;
            if (similar(c, s)) return true;
        }
        return false;
    }
    private boolean similar(char[] s1, char[] s2){
        for (int i = 0; i < s1.length; i++){
            if (s1[i] != s2[i]) return false;
        }
        return true;
    }
}