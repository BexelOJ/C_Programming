#include <stdio.h>

int main()
{
unsigned int a = 1;
char *p = (char*) &a;
if(*p==1)
	printf("Litte Endian\n");
else
	printf("Big Endian\n");
return 0;
}
