int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {

    int left = 0;
    int right = numbersSize-1;
    int sum = 0;
    int *arr = malloc(2 * sizeof(int));
    *returnSize = 2;

    while( left < right ){
        
        sum = numbers[left] + numbers[right];
      
        if ( sum == target ){
            arr[0] = left + 1;
            arr[1] = right + 1;
            return arr;
        }
         
        if ( sum < target )
        left++;
        else 
        right--;
    }
    return arr;
}
