int findMin(int* nums, int numsSize) {

    int left = 0;
    int right = numsSize - 1;
    int res = nums[0];

    while( left <= right )
    {
        int mid = ( left + right ) / 2 ;
        if( nums[left] <= nums[mid] )
        {
           if ( nums[left] < res)
           res = nums[left];

           left = mid + 1;
        }
        else {
            if( nums[mid] < res)
            res = nums[mid];

            right = mid - 1;
        }

    }
    return res;
}
