import java.util.*;
class MyHashMap {
    List<List<Integer>> s = new ArrayList<List<Integer>>();
    public MyHashMap() {
    }
    
    public void put(int key, int value) {
        for (List<Integer> i: s){
            if (i.get(0) == key){
                i.remove(1);
                i.add(value);
            }
        }
        List<Integer> temp = new ArrayList<Integer>();
        temp.add(key);
        temp.add(value);
        s.add(temp);
    }
    
    public int get(int key) {
        for (List<Integer> i:s){
            if (i.get(0) == key){
                return i.get(1);
            }
        }
        return -1;
    }
    
    public void remove(int key) {
        int n = 0;
        for (List<Integer> i:s){
            if (i.get(0) == key){
                i.remove(1);
                i.add(-1);
            }
            n++;
        }
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */