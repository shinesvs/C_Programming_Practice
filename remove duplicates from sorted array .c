int removeDuplicates(int* nums, int numsSize) {

    int left = 0;
    int right = 1;

    while( right < numsSize ){
        if ( nums[right] != nums[left] )
        nums[++left] = nums[right++];
        else 
        right++;
    } 
    return left+1;
