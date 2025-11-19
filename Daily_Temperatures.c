/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {

    int * res_array = calloc( temperaturesSize , sizeof(int));
    *returnSize = temperaturesSize;
    int stack[temperaturesSize];
    int top = -1;
    for ( int i = 0 ; i < temperaturesSize ; i++ ){
        
        while( top >= 0 && temperatures[i] > temperatures[stack[top]]){
            int prevIdx = stack[top--];
            res_array[prevIdx] = i - prevIdx;
        }

        stack[++top] = i;

}  
    return res_array; 
}
