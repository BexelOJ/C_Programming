#include <stdio.h>

int main()
{
    unsigned int i = 1;
    
    char *c = (char*)&i;

    printf("\n %c \n", c);

    if(*c)
    {
        printf("\n Little Endian");
    }
    else    
    {
        printf("\n Little Endian");
    }

    return 0;
}

