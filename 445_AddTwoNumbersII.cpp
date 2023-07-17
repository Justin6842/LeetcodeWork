class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> stac1;
        stack<int> stac2;
        ListNode* temp = l1;
        while (temp != nullptr){
            stac1.push(temp->val);
            temp = temp->next;
        }
        temp = l2;
        while (temp != nullptr){
            stac2.push(temp->val);
            temp = temp->next;
        }
        
        vector<int> total;
        int carry{0};
        while(stac1.size() > 0 || stac2.size() > 0){
            if (stac1.size() == 0){
                total.push_back((stac2.top()+carry)%10);
                carry = (stac2.top()+carry)/10;
                stac2.pop();
            }
            else if (stac2.size() == 0){
                total.push_back((stac1.top()+carry)%10);
                carry = (stac1.top()+carry)/10;
                stac1.pop();
            }
            else{
                total.push_back((stac1.top()+stac2.top()+carry)%10);
                carry = (stac1.top()+stac2.top()+carry)/10;
                stac1.pop();
                stac2.pop();
            }
        }
        if (carry == 1) total.push_back(1);

        ListNode* sol = new ListNode(total[0], nullptr);
        for (int i = 1; i < total.size(); i++){
            temp = new ListNode(total[i], sol);
            sol = temp;
        }
        return sol;
    }
};