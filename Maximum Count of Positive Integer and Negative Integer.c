int maximumCount(int* nums, int numsSize) {

    int left = 0;
    int right = numsSize - 1;
    while ( left <= right ){
        int mid = ( left + right ) / 2;
        if ( nums[mid] > 0 ){
            right = mid - 1;
        } else {
            left = mid + 1;
        }}

        int positive =  numsSize - left;;

    left = 0;
    right = numsSize - 1;
    while ( left <= right ){

        int mid = ( left + right ) / 2;
        if ( nums[mid] < 0 ){
            left = mid + 1;
        } else {
        right = mid - 1;

    }}
    int negative = right + 1;
     
    if (positive > negative){
        return positive;
    }else {
    return negative;
    }

    
}
