import java.util.*;
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode leftofhead = null;
        while (head != null){
            ListNode nextval = head.next; 
            head.next = leftofhead; 
            leftofhead = head; 
            head = nextval; 
        }
        return leftofhead;
    }
}