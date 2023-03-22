#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

 struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* temp = l2;
    int v = l1->val+temp->val;
    temp->val = v%10;
    int r = v/10;
    while(temp->next != NULL || l1->next != NULL){
        if (temp->next == NULL){
            temp->next = malloc(sizeof(struct ListNode));
            temp->next->next = NULL;
            int v = r+l1->next->val;
            temp->next->val = v%10;
            r = v/10;
            temp = temp->next;
            l1 = l1->next;
            }
        else if (l1->next == NULL){
            int v = r+temp->next->val;
            temp->next->val = v%10;
            r = v/10;
            temp = temp->next;
        }
        else{
            int v = r+l1->next->val+temp->next->val;
            temp->next->val = v%10;
            r = v/10;
            temp = temp->next;
            l1 = l1->next;
        }
    }
    if (r > 0){
        temp->next = malloc(sizeof(struct ListNode));
        temp->next->next = NULL;
        temp->next->val = r;
    }
    return l2;
}