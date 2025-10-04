/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

struct ListNode * dummy = malloc(sizeof(struct ListNode));
dummy -> next = NULL;
struct ListNode * head = dummy;
struct ListNode * p1 = list1;
struct ListNode * p2 = list2;

while( p1 != NULL && p2 != NULL ){
    if ( p1 -> val <= p2 -> val ){
        dummy -> next = p1;
        p1 = p1 -> next;
    } else {
        dummy -> next = p2;
        p2 = p2 -> next;
    }
    dummy = dummy -> next;
}

if ( p1 == NULL && p2 != NULL )
dummy -> next = p2;
else if (  p2 == NULL && p1 != NULL)
dummy -> next = p1;

return head->next;
    
}
