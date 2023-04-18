import java.util.*;
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        List<Integer> l = new ArrayList<Integer>();
        ListNode temp = head;
        while (temp != null){
            l.add(temp.val);
            temp = temp.next;
        }
        temp = head;
        for (int i = 1; i < (l.size()/k)+1; i++){
            for (int j = 1; j < k+1; j++){
                temp.val = l.get(i*k-j);
                temp = temp.next;
            }
        }
        return head;
    }
}