import java.io.*;
import java.util.*;
class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        Map<String, Integer> combo = new HashMap<>();
        List<String> sol = new ArrayList<String>();
        for (int i = 0; i < words.length; i++){
            if (combo.containsKey(words[i])) {
                combo.put(words[i], combo.get(words[i])+1);
            }
            else{
                combo.put(words[i], 1);
            }
        }
        int[] prio = new int[combo.size()+1];
        String[] str = new String[combo.size()+1];
        int i = 1;
        for (String key: combo.keySet()) {
            String keys = key.toString();
            int val = combo.get(key);
            put(prio, str, i, keys, val);
            i++;
        }
        for(int j = 0; j < k; j++){
            sol.add(pop(prio, str));
        }
        return sol;
        
    }
    private void put(int[] prio, String[] str, int length, String key, int val){
        prio[length] = val;
        str[length] = key;
        swim(prio, str, length);
    }
    private String pop(int[] prio, String[] str){
        String x = str[1];
        prio[1] = 0;
        sink(prio, str, 1);
        return x;
    }
    private void sink(int[] prio, String[] str, int k){
        while (true){
            int smaller = -1;
            if (k*2 > prio.length-1) break;
            else if (k*2+1 > prio.length-1) smaller = k*2;
            else if (prio[2*k] > prio[2*k+1] || (prio[2*k] == prio[2*k+1] && str[2*k].compareTo(str[2*k+1]) < 0)) smaller = k*2;
            else{
                smaller = k*2+1;
            }
            if (prio[k] > prio[smaller]) break;
            else{
                int temp = prio[smaller];
                prio[smaller] = prio[k];
                prio[k] = temp;
                String temp2 = str[smaller];
                str[smaller] = str[k];
                str[k] = temp2;
                k = smaller;
            }
        }
        return;
    }
    private void swim(int[] prio, String[] str, int k){
        while (true){
            if (k/2 == 0) break;
            else if (prio[k] > prio[k/2] || (prio[k] == prio[k/2] && str[k].compareTo(str[k/2]) < 0)){
                int temp = prio[k/2];
                prio[k/2] = prio[k];
                prio[k] = temp;
                String temp2 = str[k/2];
                str[k/2] = str[k];
                str[k] = temp2;
                k = k/2;
            }
            else{
                break;
            }
        }
        return;
    }
}