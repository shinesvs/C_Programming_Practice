int findPeakElement(int* nums, int numsSize) {

    int left = 0;
    int right = numsSize;

    while ( left <= right ){

        int mid = ( left + right ) / 2;

        if ( mid < numsSize - 1 && nums[mid] < nums[mid + 1])
        left = mid + 1;
        else if ( mid > 0 && nums[mid] < nums[mid - 1])
        right = mid - 1;
        else 
        return mid;

    }
  
return 0;

}
