import java.util.*;
class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> sol = new ArrayList<List<Integer>>();
        gen(sol, numRows);
        return sol;
    }
    private void gen(List<List<Integer>> s, int rounds){
        if (rounds == 0) return;
        List<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < s.size()+1; i++){
            if (i == 0 || i == s.size()) list.add(1);
            else{
                list.add(s.get(s.size()-1).get(i-1)+s.get(s.size()-1).get(i));
            }
        }
        s.add(list);
        gen(s, rounds-1);
    }
}