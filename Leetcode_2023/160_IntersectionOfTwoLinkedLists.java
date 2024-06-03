import java.util.*;
public class ListNode{
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int aCount = 0, bCount = 0;
        ListNode tempa = headA;
        while (tempa != null){
            aCount++;
            tempa = tempa.next;
        }
        ListNode tempb = headB;
        while (tempb != null){
            bCount++;
            tempb = tempb.next;
        }
        tempa = headA;
        tempb = headB;
        for (int i = 0; i < aCount-bCount; i++){
            tempa = tempa.next;
        }
        for (int i = 0; i < bCount-aCount; i++){
            tempb = tempb.next;
        }
        while (tempa != null){
            if (tempa == tempb) return tempa;
            tempa = tempa.next;
            tempb = tempb.next;
        }
        return null;
    }
}