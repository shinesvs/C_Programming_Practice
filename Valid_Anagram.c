bool isAnagram(char* s, char* t) {

    if( strlen(s) != strlen(t) )
    return false;

    struct entry 
    {
        char key;
        int val;
        UT_hash_handle hh;
    };

    struct entry * hash = NULL;
    
    int n = strlen(s);
    for ( int i = 0 ; i < n ; i++){
        struct entry * e;
        HASH_FIND( hh, hash , &s[i] , sizeof(char), e );
        if( e == NULL ){
            e = malloc(sizeof(struct entry));
            e -> key = s[i];
            e -> val = 1;
            HASH_ADD( hh, hash, key, sizeof(char), e);   
        }else {
            e -> val++;
        }
    }

    for ( int i = 0 ; i < n ; i++ )
    {
        struct entry *e;
        HASH_FIND( hh, hash, &t[i], sizeof(char), e );
        if( e == NULL )
        return false;
        else {
            e -> val--;
            if( e -> val < 0 )
            return false;
        }
    }

    return true;
}
