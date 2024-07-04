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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* sol = new ListNode(0, NULL);
        ListNode* adding = sol;
        head = head->next;
        int total = 0;
        while (head != NULL){
            if (head->val == 0){
                if (sol->val == 0) sol->val = total;
                else{
                    adding->next = new ListNode(total, NULL);
                    adding = adding->next;
                }
                total = 0;
            }
            else{
                total += head->val;
            }
            head = head->next;
        }
        return sol;
    }
};