class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> total;
        ListNode* mid = head;
        ListNode* end = head;
        while (end != nullptr){
            total.push_back(mid->val);
            mid = mid->next;
            end = end->next->next;
        }
        int space = total.size()-1;
        int sol{0};
        while (mid != nullptr){
            if (total[space] + mid->val > sol) sol = total[space] + mid->val;
            space--;
            mid = mid->next;
        }
        return sol;
    }
};