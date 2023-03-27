import java.util.*;
public class ListNode{
         int val;
         ListNode next;
         ListNode() {}
         ListNode(int val) { 
            this.val = val; 
        }
         ListNode(int val, ListNode next) { 
            this.val = val; this.next = next; 
    }
}
class Solution {
    public ListNode middleNode(ListNode head) {
        if (head.next == null) return head;
        ListNode temp = head;
        int count = 0;
        while (temp != null){
            count++;
            temp = temp.next;
        }
        if (count%2 == 1) count--;
        count /= 2;
        temp = head;
        while (temp != null){
            if (count == 0) return temp;
            count--;
            temp = temp.next;
        }
        return head;
    }
}
