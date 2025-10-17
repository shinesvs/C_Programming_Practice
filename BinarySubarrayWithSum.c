int numSubarraysWithSum(int* nums, int numsSize, int goal) {

        int maxSum = numsSize;
        int* freq = (int*)calloc(maxSum + 1, sizeof(int));
        freq[0] = 1; // prefix sum 0 has occurred once (before we start)

        int sum = 0, count = 0;
        for (int i = 0; i < numsSize; i++) {
            sum += nums[i];
            if (sum - goal >= 0) {
                count += freq[sum - goal];
            }
            freq[sum]++;
        }
        free(freq);
        return count;
    }
