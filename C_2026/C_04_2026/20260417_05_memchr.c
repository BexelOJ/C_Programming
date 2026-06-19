#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    char *p = memchr(str, 'w', strlen(str));

    if (p != NULL)
        printf("Found at position: %ld\n", p - str);
    else
        printf("Not found\n");

    return 0;
}

