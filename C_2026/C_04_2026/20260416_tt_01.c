#include <stdio.h>
#include <string.h>

int main(){

char *p = "Hello";
//p[0] = 'h';
printf("%s\n", p);

int len = strlen(p);
for(int i = 0; i < len; i++){
    printf("%c", p[i]);
}
printf("\n");


char str[] = "Hello India";
str[0] = 'h';
printf("%s\n", str);

/*
char *a = str;
while(*a != '\0'){
    printf("%c", *a);
    a++;
}

*/

printf("\n");



return 0;
}

