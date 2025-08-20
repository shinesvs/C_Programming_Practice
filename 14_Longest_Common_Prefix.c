char* longestCommonPrefix(char** strs, int strsSize) {

 for (int i = 0; i < strsSize; i++) {
        if (strlen(strs[i]) == 0) {
            return "";
        }
 }
char * min = strs[0];
char * max = strs[0];

for ( int i = 1 ; i < strsSize ; i++){
    
    if ( strcmp ( min , strs[i]) < 0 )
    min = strs[i];

    if ( strcmp ( max , strs[i]) > 0 )
    max = strs[i];

}

int i = 0;
while (min[i] && max[i] && min[i] == max[i]){
    i++;
}

char *prefix = malloc((i + 1) * sizeof(char));
    strncpy(prefix, min, i);
    prefix[i] = '\0';

    return prefix;

    
}
