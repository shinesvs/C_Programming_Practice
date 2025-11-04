typedef struct {
    int data[30000];
    int minstack[30000];
    int top;
} MinStack;


MinStack* minStackCreate() {
    MinStack *stack = malloc(sizeof(MinStack));
    stack -> top  = -1;
    return stack;
}

void minStackPush(MinStack* obj, int val) {
    obj->data[++obj->top] = val;
    if ( obj -> top == 0 )
         obj->minstack[obj->top] = val;
    else
         if ( obj -> minstack[obj -> top - 1] > val ){
            obj -> minstack[obj -> top] = val;
         } else{
            obj -> minstack[obj -> top] = obj -> minstack[obj -> top - 1];
         }
          
}

void minStackPop(MinStack* obj) {
    obj->top-- ;
}

int minStackTop(MinStack* obj) {
    return obj->data[obj->top];
    
}

int minStackGetMin(MinStack* obj) {
    return obj->minstack[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj);
    
}
