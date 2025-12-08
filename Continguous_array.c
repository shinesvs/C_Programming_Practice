int findMaxLength(int* nums, int numsSize) {
     
    int sum = 0;
    int max_length = 0;
    struct entry {
        int key;
        int val;
        UT_hash_handle hh;
    };

    struct entry * hash = NULL;

    struct entry *e,*tmp;

    e = malloc(sizeof(struct entry));
    e -> key = 0;
    e -> val = -1;
    HASH_ADD_INT( hash , key , e );

    for ( int i = 0 ; i < numsSize ; i++ ){

        if ( nums[i] == 0 )
           sum = sum - 1;
        if ( nums[i] != 0 )
           sum = sum + 1;

        HASH_FIND_INT( hash , &sum , e);

        if( e == NULL ){
            e = malloc(sizeof(struct entry));
            e -> key = sum;
            e-> val = i;
            HASH_ADD_INT(hash, key ,e);
        } else {

            int length = i - e->val;
            if ( length > max_length)
                max_length = length;
            
        }

    }

    HASH_ITER(hh, hash, e, tmp){
        HASH_DEL(hash, e);
        free(e);
    }
                       
    return max_length;
    
}
