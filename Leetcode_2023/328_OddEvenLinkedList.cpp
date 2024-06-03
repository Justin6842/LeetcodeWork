
class Solution {
public:
    ListNode* oddEvenList(ListNode* head){
        if (head == nullptr) return head;
        ListNode* temp = head;
        vector<int> opp;
        while (temp->next != nullptr){
            opp.push_back(temp->next->val);
            temp->next = temp->next->next;
            if (temp->next == nullptr) break;
            temp = temp->next;
        }
        ListNode* insert;
        for (int i = 0; i < opp.size(); i++){
            insert = new ListNode(opp[i], nullptr);
            temp->next = insert;
            temp = temp->next;
        }
        return head;
    }
};