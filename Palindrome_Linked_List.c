
bool isPalindrome(struct ListNode* head) {
     struct ListNode * slow = head;
     struct ListNode * fast = head;
     int count = 0;


     while ( fast != NULL && fast -> next != NULL ){
        slow = slow -> next;
        fast = fast -> next -> next;
     }

     if ( fast != NULL )
     slow = slow -> next;

     struct ListNode * secondHalf = reverse( slow );


     struct ListNode * p1 = head;
     struct ListNode * p2 = secondHalf;

     while ( p2 != NULL ){
        if ( p1 -> val != p2 -> val)
        return false;

        p1 = p1 -> next;
        p2 = p2 -> next;
     }
        return true;

     }




 struct ListNode * reverse ( struct ListNode * head ){
    struct ListNode * curr = head;
    struct ListNode * prev = NULL;

    while ( curr != NULL ){

        struct ListNode * nextTemp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextTemp; 
    } 

    return prev;
 }
