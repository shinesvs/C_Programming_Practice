// Second Largest Element in an Array

#include <stdio.h>

int second_largest_array( int arr[] , int n );    
static int largest;    
static int best_value= 10000;
    
int second_largest_array( int arr[] , int n){
    int i;
    for ( i=0; i<n ; i++){
        if (arr[i] > largest){
            largest = arr[i];
            }
    }
    for ( i=0; i<n; i++ ){
        if ( arr[i] < largest && largest != arr[i]){
            best_value = arr[i];
        }
        
    }
    if ( best_value == largest ){
        return -1;
    }
    
    return best_value;
}

int main() {
    int arr[] = { 10, 10, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", second_largest_array(arr, n));
    return 0;
}
