double findMaxAverage(int* nums, int numsSize, int k) {

    double result;

    int left = 0;
    int right = 0;
    double sum = 0;
    double window_size = 0;
    double max_avg = -INFINITY;

    while ( right < numsSize ){
        sum = sum + nums[right];

        window_size = right - left + 1;

        if( window_size == k ){
            double avg = sum / k;
            if ( avg > max_avg )
            max_avg = avg;
            
            sum = sum - nums[left];
            left++;
            right++;
        } else right++;

    }

    return max_avg;
    
}
