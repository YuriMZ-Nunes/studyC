#include <stdio.h>

struct ListNode {
      int val;
      struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head);

int main(){
    struct ListNode head;
    struct ListNode* h = &head;
    struct ListNode val1;
    struct ListNode val2;
    struct ListNode val3;
    struct ListNode val4;
    struct ListNode val5;

    val1.val = 1;
    val2.val = 1;
    val3.val = 2;
    val4.val = 3;
    val5.val = 3;

    h->next = &val1;
    h = h->next;

    h->next = &val2;
    h = h->next;

    h->next = &val3;
    h = h->next;

    h->next = &val4;
    h = h->next;

    h->next = &val5;

    deleteDuplicates(head.next);

}

struct ListNode* deleteDuplicates(struct ListNode* head){

    struct ListNode* result = head;

    while(result){
        if(result->val == result->next->val && result->next != NULL)
            result ->next = result ->next->next;
        else{
            result = result->next;
        }
    }

    return head;
    
}