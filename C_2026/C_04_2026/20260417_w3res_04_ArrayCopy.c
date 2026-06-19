#include <stdio.h>

int arr[20];

int main(){
    int n = 10;
    int arr_1[n], arr_2[n]; 

    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr_1[i]);
        arr_2[i] = arr_1[i];
    }
    /*
    for(int i=0; i<n; i++){
        arr_2[i] = arr_1[i];
    }*/

    for(int i=0; i<n; i++){
        printf("%d ", arr_2[i]);
    }
    
    printf("\n");

    return 0;
}


