#include <stdio.h>
#include <stdarg.h>

void printInts(int count, ...) {
    va_list args, args_copy;
    va_start(args, count);
    va_copy(args_copy, args);

    for (int i = 0; i < count; i++) {
        int value = va_arg(args, int);
        printf("%d ", value);
    }

    va_end(args_copy);
    va_end(args);
    printf("\n");
}
