import java.util.*;
public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
         ListNode(int val) { this.val = val; }
         ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}
class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode temp = head;
        int k = 0;
        while (true){
            if (temp == null) break;
            k++;
            temp = temp.next;
        }
        Stack<Integer> s = new Stack<Integer>();
        temp = head;
        for (int i = 0; i < k/2; i++){
            s.add(temp.val);
            temp = temp.next;
        }
        if (k%2 == 1) temp = temp.next;
        for (int i = 0; i < k/2; i++){
            if(temp.val != s.pop()) return false;
            temp = temp.next;
        }
        return true;
    }
}