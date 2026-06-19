#include <stdio.h>

int arr_2[20];

int main(){
    int n = 10;
    int arr[n]; 
    int sum = 0;

    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    printf("Sum of the array elements: %d\n", sum);
    
    return 0;
}


