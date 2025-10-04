/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    
    struct ListNode * dummy = malloc(sizeof(struct ListNode));
    dummy -> next = head;
    struct ListNode * curr = head;
    struct ListNode * prev = dummy;
    
    while( curr != NULL && curr -> next != NULL ){

        struct ListNode * nxtPair = curr -> next -> next;
        struct ListNode * second = curr -> next;

        second -> next = curr;
        curr -> next = nxtPair;
        prev -> next = second;

        prev = curr;
        curr = nxtPair;

    }
    return dummy -> next;
}
