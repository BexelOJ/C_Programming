#include <stdio.h>
#include <stdlib.h>

int main(){

int arr[] = {1, 2, 3, 4};
//int *arr = (int*)malloc(4*sizeof(int));

printf("%d\n", *(arr + 1) + *(&arr[2] - 1));


return 0;
}

/*
Original:

int arr[] = {1, 2, 3, 4};
printf("%d", *(arr + 1) + *(&arr[2] - 1));

OUTOUT:

4 // 2 + 2

*/

