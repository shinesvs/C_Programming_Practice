/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {

    struct ListNode * dummy = malloc(sizeof(struct ListNode));
    dummy -> next = head;
    struct ListNode * left_prev = dummy;
    struct ListNode * curr = head;

    for( int i = 1 ; i < left ; i++)
    {
        curr = curr -> next;
        left_prev = left_prev -> next;
    }

    struct ListNode * prev = NULL;

    for ( int i = 0 ; i <= right - left ; i++ )
    {
       struct ListNode * temp = curr -> next;
       curr -> next = prev;
       prev = curr;
       curr = temp;
    }
    
    left_prev -> next -> next = curr;
    left_prev -> next = prev;

    return dummy-> next;


} 
