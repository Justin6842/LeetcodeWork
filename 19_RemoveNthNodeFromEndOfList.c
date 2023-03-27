 struct ListNode {
    int val;
    struct ListNode *next;
 };
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if (head->next == NULL && n == 1) return NULL;
    int counter = 0;
    struct ListNode* temp = head;
    while (1){
        counter++;
        if (temp->next == NULL) break;
        temp = temp->next;
    }
    //side case
    if (n == counter){
        head = head->next;
        return head;
    }
    //general case
    temp = head;
    for(int i = 0; i < counter-n; i++){
        if (i == counter-n-1){
            temp->next = temp->next->next;
            return head;
        }
        temp = temp->next;
    }
    return head;
}