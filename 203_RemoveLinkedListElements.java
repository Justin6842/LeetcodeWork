class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode temp = head;
        while(temp != null){
            if (temp.next == null) break;
            if (temp.next.val == val) temp.next = temp.next.next;
            else{
                temp = temp.next;
            }
        }
        if (head != null && head.val == val) head = head.next;
        return head;
    }
}