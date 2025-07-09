// Second Largest Element in an Array

#include <stdio.h>

int second_largest_array( int arr[] , int n );
    
    // Write C code here
int largest=-1;    
int second_largest = -1;

    
int second_largest_array( int arr[] , int n){
    int i;
    for ( i=0; i<n ; i++){
        if (arr[i] > largest){
            largest = arr[i];
            }
    }
    for ( i=0; i<n; i++ ){
        if ( arr[i] > second_largest && largest != arr[i]){
            second_largest = arr[i];
        }
        
    }
    // if ( second_largest == largest ){
    //     return -1;
    // }
    
    return second_largest;
}

int main() {
    int arr[] = { 10, 10, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", second_largest_array(arr, n));
    return 0;
}
