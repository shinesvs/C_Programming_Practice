#include <stdio.h>

int longestSubarray ( int arr[] , int n , int X ){
  int left = 0 , sum = 0, max_length = 0;
  for ( int right = 0 ; right < n ; right++){
    sum += arr[right];
    
    
    while ( sum > X && left <= right ){
      sum -= arr[left];
      left++;
    }
    
    if ( right - left + 1 > max_length ){
      max_length = right - left + 1;
    }
  }
  return max_length;
}


int main() {
    int arr[] = {2, 1, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 7;

    printf("Longest subarray length with sum <= %d is %d\n", X, longestSubarray(arr, n, X));
    return 0;
}
