#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcdefghij";

    memmove(str + 2, str, 5);

    printf("Result: %s\n", str);
    return 0;
}

