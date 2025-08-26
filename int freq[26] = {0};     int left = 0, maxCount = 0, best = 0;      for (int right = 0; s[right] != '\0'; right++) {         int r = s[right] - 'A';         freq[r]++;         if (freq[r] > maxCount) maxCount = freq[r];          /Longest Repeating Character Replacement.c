int characterReplacement(char* s, int k) {
      
    int freq[26] = {0};
    int left = 0, maxCount = 0, best = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        int r = s[right] - 'A';
        freq[r]++;
        if (freq[r] > maxCount) maxCount = freq[r];

        // If more than k chars need replacing, shrink from the left
        while ((right - left + 1) - maxCount > k) {
            freq[s[left] - 'A']--;
            left++;
        }

        int windowLen = right - left + 1;
        if (windowLen > best) best = windowLen;
    }
    return best;


}
