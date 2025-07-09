#include <stdio.h>

int binary_search ( int arr[] , int n , int t){
    int low=0; 
    int high = n-1;
    
    
    while ( low <= high ){
        int mid = (low + high)/2;
        
        if ( arr[mid] == t){
            return mid;
        }
        
        if ( arr[mid] > t ){
            high = mid -1;
        }else {
            low = mid +1;
        }
    } 
}

int main(){
int arr[] = {2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
int result = binary_search(arr, n, 3);
printf("%d", result);

}
