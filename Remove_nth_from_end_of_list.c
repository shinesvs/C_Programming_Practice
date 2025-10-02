/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
      struct ListNode * temp = head;
      int i = 0;
      while ( temp != NULL ){
        temp = temp -> next;
        i++;
      }

      int pos_of_n =( i - n ) ;
      if ( i == n ){
        return head -> next;
      }

      temp = head;
      int curr_indx = 0;
      while ( temp != NULL ){
        if ( curr_indx == pos_of_n - 1 ){

            temp -> next = temp -> next -> next;
            return head;
        }
        curr_indx++;
        temp = temp -> next;
      }
  return head;
}
