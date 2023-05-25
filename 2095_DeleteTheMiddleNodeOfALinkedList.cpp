/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL) return NULL;
        ListNode* temp{head};
        ListNode* replace{head};
        while(true){
            temp = temp->next;
            if (temp->next == NULL) break;
            temp = temp->next;
            if (temp->next == NULL) break;
            replace = replace->next;
        }
        replace->next = replace->next->next;
        return head;
    }
};