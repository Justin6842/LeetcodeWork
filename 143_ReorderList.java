import java.util.*;
class Solution {
    public void reorderList(ListNode head) {
        List<Integer> t = new ArrayList<Integer>();
        ListNode temp = head;
        while (temp != null){
            t.add(temp.val);
            temp = temp.next;
        }
        int x = 0, y = t.size()-1;
        temp = head;
        while (x < y){
            temp.val = t.get(x);
            x++;
            temp = temp.next;
            temp.val = t.get(y);
            y--;
            temp = temp.next;
        }
        if (t.size()%2 == 1) temp.val = t.get(x);
    }
}