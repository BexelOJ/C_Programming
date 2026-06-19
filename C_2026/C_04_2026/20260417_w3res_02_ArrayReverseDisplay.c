#include <stdio.h>

int arr_2[20];

int main(){
    int n = 10;
    int arr[n]; 

    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}


