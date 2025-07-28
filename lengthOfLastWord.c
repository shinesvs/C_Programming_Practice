int lengthOfLastWord(char* s) {
    char arr[100];  
    int i = 0;

    
    while (s[i] != '\0' && i < sizeof(arr) - 1) {
        arr[i] = s[i];
        i++;
    }
    arr[i] = '\0';

  
    i--; 
    while (i >= 0 && arr[i] == ' ') {
        i--;
    }

    
    int length = 0;
    while (i >= 0 && arr[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
