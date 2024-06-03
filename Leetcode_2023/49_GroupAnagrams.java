import java.util.*;
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> sol = new ArrayList<List<String>>();
        HashMap<String, Integer> map = new HashMap<>();
        int m = 0;
        for (int i = 0; i < strs.length; i++){
            char[] ch = strs[i].toCharArray();
            Arrays.sort(ch);
            String x = new String(ch);
            if (map.containsKey(x)) sol.get(map.get(x)).add(strs[i]);
            else{
                map.put(x, m);
                sol.add(new ArrayList<String>());
                sol.get(m).add(strs[i]);
                m++;
            }
        }
        return sol;
    }
}