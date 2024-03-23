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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* countNode = head;
        int count = 0;
        while (countNode != NULL){
            countNode = countNode->next;
            if (countNode != NULL){
                count++;
                temp = temp->next;
                countNode = countNode->next;
            }
        }
        ListNode* right = NULL;
        while (temp != NULL){
            ListNode* nex = temp->next;
            temp->next = right;
            right = temp;
            temp = nex;
        }
        ListNode* left = head;
        ListNode* tempL;
        ListNode* tempR;
        for (int i = 0; i < count; i++){
            tempL = left->next;
            tempR = right->next;
            left->next = right;
            if (i != count-1){
                right->next = tempL;
                left = tempL;
                right = tempR;
            }
        }
    }
};