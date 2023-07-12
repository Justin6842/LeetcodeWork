class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> sorter;
        ListNode* temp = head;
        while(temp != nullptr){
            sorter.push_back(temp->val);
            temp = temp->next;
        }
        sort(sorter.begin(), sorter.end());
        temp = head;
        for (int i = 0; i < sorter.size(); i++){
            temp->val = sorter[i];
            temp = temp->next;
        }
        return head;
    }
};