import java.util.*;
class Solution {
    public ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null) return head;
        ListNode temp = head.next;
        head.next = temp.next;
        temp.next = head;
        head = temp;
        temp = temp.next;
        while (temp.next != null && temp.next.next != null){
            ListNode temp2 = temp.next;
            temp.next = temp.next.next;
            temp2.next = temp2.next.next;
            temp.next.next = temp2;
            temp = temp2;
        }
        return head;
    }
}