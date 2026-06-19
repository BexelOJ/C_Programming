#include <stdio.h>

int main(){

int arr[] = {10, 20, 30, 40};
int *p = arr + 2;
printf("%d\n", arr[0]);
printf("%p\n", (void*)arr);

printf("%d\n", *(p-1));
printf("%d\n", p[-1]);

return 0;
}


/*
Original:

int arr[] = {10, 20, 30, 40};
int *p = arr + 2;
printf("%d", p[-1]);

Output:

20

// *p = arr + 2 = address of arr[2] = 30
// p[-1] = *(p - 1) = *(arr + 2 - 1) = *(arr + 1) = arr[1] = 20

*/

