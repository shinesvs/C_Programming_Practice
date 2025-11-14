/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int hash1[1001];
    int hash2[1001];
    int * res_array = malloc( 1001 * sizeof(int));
    int idx = 0;
    for( int i = 0 ; i < nums1Size ; i++)
    {
        if ( hash1[nums1[i]] == 0 )
            hash1[nums1[i]]++;
    }
    
    for ( int i = 0 ; i < nums2Size ; i++)
    {
        if( hash2[nums2[i]] == 0 && hash1[nums2[i]] == 1 )
        {
           res_array[idx++] = nums2[i];
           hash2[nums2[i]] = 1;
        }
    }
    
    *returnSize = idx;
    return res_array;
}
