/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode * dummy = malloc(sizeof(struct ListNode));
    dummy -> next = head;

    struct ListNode * prev = dummy -> next;
    struct ListNode * curr = head;
    int i = 0;

    while( i < n ){
       curr = curr -> next;
       i++;
    }

    if( curr == NULL ){
        return dummy -> next -> next;
    }

    while( curr -> next != NULL ){
        curr = curr ->next;
        prev = prev -> next;
    }

    prev -> next = prev -> next -> next;
     
    return dummy -> next;

}
