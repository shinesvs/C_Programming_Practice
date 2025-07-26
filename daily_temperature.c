int* dailyTemperatures(int* T, int TSize, int* returnSize) {
    int* res = malloc(TSize * sizeof(int));
    int stack[TSize];
    int top = -1;

    for (int i = TSize - 1; i >= 0; i--) {
        while (top >= 0 && T[i] >= T[stack[top]]) {
            top--;  
        }

        res[i] = (top == -1) ? 0 : (stack[top] - i);
        stack[++top] = i;  
    }

    *returnSize = TSize;
    return res;
}
