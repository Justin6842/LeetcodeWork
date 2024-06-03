import java.util.*;
class Solution {
    public boolean wordPattern(String pattern, String s) {
        HashMap<Character, String> sol = new HashMap<Character, String>();
        int slen = 0;
        String x = "";
        for(int i = 0; i < pattern.length(); i++){
            if (slen == s.length()) return false;
            x = "";
            while (true){
                if (slen == s.length()){
                    break;
                }
                else if (s.charAt(slen) == ' '){
                    slen++;
                    break;
                }
                x = x+s.charAt(slen);
                slen++;
            }
            if (sol.containsKey(pattern.charAt(i))){
                if (sol.get(pattern.charAt(i)).equals(x)) continue;
                return false;
            }
            else{
                sol.put(pattern.charAt(i), x);
            }
        }
        if (slen != s.length()) return false;
        HashSet<String> n = new HashSet<String>();
        for (char y: sol.keySet()){
            n.add(sol.get(y));
        }
        if (n.size() != sol.size()) return false;
        return true;
    }
}