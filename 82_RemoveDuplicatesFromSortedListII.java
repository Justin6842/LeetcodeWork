import java.util.*;
public class ListNode{
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null || head.next == null) return head;
        head = move(head);
        if (head == null) return head;
        ListNode temp = head.next;
        ListNode tempb = head;
        while (temp != null){
            if (temp.next != null && temp.val == temp.next.val){
                tempb.next = move(temp);
                tempb = tempb.next;
                if (tempb == null) return head;
                temp = tempb.next;
            }
            else{
                tempb = temp;
                temp = tempb.next;
            }
        }
        return head;
    }
    private ListNode move(ListNode n){
        if (n == null || n.next == null || n.val != n.next.val) return n;
        ListNode temp = n.next;
        while (temp != null){
            if (temp.val != n.val){
                n = temp;
                break;
            }
            temp = temp.next;
        }
        if (temp == null) n = null;
        n = move(n);
        return n;
    }
}