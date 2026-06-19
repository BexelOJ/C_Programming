#include <stdio.h>

int arr[20];

int main(){
    int n = 10;
    int arr_1[n];
    int count = 0;
    
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr_1[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr_1[i] == arr_1[j]){
                count++;      
            }
        }

        printf("Element %d is repeated %d times\n", arr_1[i], count);
        count = 0;
    }

    return 0;
}

