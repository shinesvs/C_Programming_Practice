#include <stdio.h>

int return_indices( int arr[] , int n, int target, int t[]);

int return_indices( int arr[] , int n, int target, int t[]){
    int count = 0;
    int x = 0;
    for ( int i =0 ; i <n ; i++ ){
        if ( arr[i] == target){
            count++;
            t[x] = i;
            x=x+1;
            }
    }
    
    if ( count == 0 ){
        return -1;
    } 
    
    return count;
}

int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int t[10];
    int result = return_indices( arr , n , target, t);
    
    if ( result == -1){
        printf(" No target Value found");
    } else {
         for ( int i = 0 ; i < result ; i++ ){
        printf("%d\n", t[i]);
    }
    }
}
