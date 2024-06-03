import java.util.*;
class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        List<String> sol = new ArrayList<String>();
        if (s.length() < 11) return sol;
        HashMap<String, Integer> filt = new HashMap<String, Integer>();
        int start = 0, end = 10;
        String ref = "";
        while (end <= s.length()){
            ref = s.substring(start, end);
            if (filt.containsKey(ref)) filt.put(ref, filt.get(ref)+1);
            else{
                filt.put(ref, 1);
            }
            start++;
            end++;
        }
        for (String k:filt.keySet()){
            if (filt.get(k) > 1){
                sol.add(k);
            }
        }
        return sol;
        
    }
}