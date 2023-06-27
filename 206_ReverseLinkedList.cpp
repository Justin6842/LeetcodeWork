class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* revhead = nullptr;
        while (head != nullptr){
            ListNode* temp = head->next;
            head->next = revhead;
            revhead = head;
            head = temp;
        }
        return revhead;
    }
};