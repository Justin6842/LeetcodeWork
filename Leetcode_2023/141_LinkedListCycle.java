import java.util.*;
public class Solution{
    public boolean hasCycle(ListNode head) {
        if (head == null) return false;
        ListNode temp = head;
        ListNode temp2 = head;
        while (true){
            temp = temp.next;
            if (temp2 == null || temp2.next == null) return false;
            temp2 = temp2.next.next; 
            if (temp2 == temp) break;
        }
        return true;
    }
}