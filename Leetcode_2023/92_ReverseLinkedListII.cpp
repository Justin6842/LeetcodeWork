class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> stac;
        ListNode* temp = head;
        int len = right-left;
        for (int i = 0; i < left-1; i++){
            temp = temp->next;
        }
        for (int i = 0; i <= len; i++){
            stac.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        for (int i = 0; i < left-1; i++){
            temp = temp->next;
        }
        for (int i = 0; i <= len; i++){
            temp-> val = stac[len-i];
            temp = temp->next;
        }
        return head;
    }
};