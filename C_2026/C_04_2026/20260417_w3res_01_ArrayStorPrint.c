#include <stdio.h>

int arr_2[20] = {1,2,3};

int main(){
    int n = 10;
    int arr[n]; 

    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}


