int compareIntegers(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int threeSumClosest(int* nums, int numsSize, int target) {
qsort( nums , numsSize , sizeof(int) , compareIntegers );

int result = nums[1] + nums[0] + nums[2];

for ( int i = 0 ; i < numsSize - 2; i++ ){

int left = i+1;
int right = numsSize-1;

while( left < right ) {

    int sum = nums[i] + nums[left] + nums[right];

    int difference = abs(sum - target);
    if ( difference < abs(result - target))
        result = sum;

    
    if( sum > target )
    right--;
    else if ( sum < target )
    left++;
    else if ( sum == target )
    break;

}
}

return result;

}
