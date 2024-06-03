struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* head = NULL;
    struct ListNode* comp = NULL;
    if (!list1)
        return list2;
    else if (!list2)
        return list1;
    if(list1->val <= list2->val){
        head = list1;
        comp = list2;
    }
    else{
        head = list2;
        comp = list1;
    }
    struct ListNode* h = head;
    struct ListNode* temp = NULL;
    while (comp != NULL){
        if (h->next == NULL){
            h->next = comp;
            break;
        }
        else if (comp->val <= h->next->val){
            temp = h->next;
            h->next = comp;
            comp = comp->next;
            h->next->next = temp;
        }
        h = h->next;
    }
    return head;
}