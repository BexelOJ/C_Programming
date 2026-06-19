#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "abc";
    char b[] = "abd";

    int result = memcmp(a, b, 3);

    if (result == 0)
        printf("Equal\n");
    else if (result < 0)
        printf("a is smaller\n");
    else
        printf("a is greater\n");

    return 0;
}

