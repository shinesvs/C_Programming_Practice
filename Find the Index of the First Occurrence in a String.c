int strStr(char* haystack, char* needle) {

int size_haystack = strlen(haystack);
int size_needle = strlen(needle);

int left = 0;
int right = 0;
int global_left = 0;

while( global_left < size_haystack ){
    
    left = global_left;
    while( haystack[left] == needle[right] ){
       if(right == size_needle-1 )
       return left - right;

       left++;
       right++;
    }

    right=0;
    global_left++;
}

return -1;

}
