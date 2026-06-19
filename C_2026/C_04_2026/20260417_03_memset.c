#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Hello World";

    memset(str, '*', 5);

    printf("Result: %s\n", str);
    return 0;
}

