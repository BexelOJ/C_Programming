#include <stdio.h>

int main(){
int x = 5;
//++x;
//printf("%d\n", x);
printf("%d\n", x++ + ++x);
//printf("%d\n", ++x + x++);
return 0;
}


/*
Original:

int x = 5;
printf("%d", x++ + ++x);

Output:

12

*/

