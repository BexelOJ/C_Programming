#include <stdio.h>

int main()
{
int c = 0;
c=sizeof(void*);
if(c==4)
	printf("This is a 32 Bit System\n");
if(c==8)
	printf("This is a 64 Bit System\n");
return 0;
}
