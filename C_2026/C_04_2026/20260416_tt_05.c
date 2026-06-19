#include <stdio.h>
#include <stdlib.h>

int main(){
int *p = malloc(sizeof(int));
*p = 10;
free(p);

printf("%d\n", *p);

return 0;
}



/*
Original:

int *p = malloc(sizeof(int));
*p = 10;
free(p);
printf("%d", *p);

OUTPUT:
1034253203 // garbage value, will change in different runs

*/

