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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp = head;
        int counter = 0;
        while (temp != NULL){
            counter++;
            temp = temp->next;
        }
        int each = counter/k;
        int seperate = counter%k;
        vector<ListNode*> sol;
        for (int i = 0; i < k; i++){
            int amount = each;
            if (i < seperate) amount++;
            ListNode* temp = head;
            if (amount == 0){
                sol.push_back(temp);
            }
            else{
                for (int i = 0; i < amount-1; i++){
                    temp = temp->next;
                }
                ListNode* rest = temp->next;
                temp->next = NULL;
                sol.push_back(head);
                head = rest;
            }
        }
        return sol;
    }
};