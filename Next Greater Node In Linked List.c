/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize) {

   int count = 0;
   struct ListNode* temp = head;

   while (temp != NULL) {
    count++;
    temp = temp->next;
 }
   int* values = (int*)malloc(count * sizeof(int));
   temp = head;

   for (int i = 0; i < count; i++) {
     values[i] = temp->val;
     temp = temp->next;
}

int stack[count];
int top = -1;
int * arr = malloc ( count * sizeof(int));

for ( int i = count - 1 ; i >= 0 ; i-- ){

    while( top != -1 && stack[top] <= values[i] ){
        top--;
    }
    if ( top == -1 ){
        arr[i] = 0; 
    } else {
        arr[i] = stack[top];
    }
    stack[++top] = values[i];

}

*returnSize = count;
return arr;
}
