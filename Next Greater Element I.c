/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

*returnSize = nums1Size;
int * result = malloc(nums1Size * sizeof(int));
for ( int i = 0 ; i < nums1Size ; i++ ){
    int num = nums1[i];
    int found = 0;
    int next = -1;

    for ( int j = 0 ; j < nums2Size ; j++ ){
        if ( nums2[j] == num ){
            found = 1;
        }

        if ( found && nums2[j] > num ){
            next = nums2[j];
            break;
        }
    }

    result[i] = next;

}

return result;

}
