#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head){
    int len = 0;
    struct ListNode* ini = head;

    while(head){
        head = head->next;
        len++;
    }
    
    

    return true;
}

int main(){
    
    struct ListNode val1;
    struct ListNode val2;
    struct ListNode val3;
    struct ListNode val4;

    val1.val=1;
    val1.next=&val2;

    val2.val=2;
    val2.next=&val3;

    val3.val=2;
    val3.next=&val4;

    val4.val=1;
    val4.next = NULL;

    isPalindrome(&val1);
}
