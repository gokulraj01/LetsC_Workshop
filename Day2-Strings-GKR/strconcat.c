#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char a[ARR_LEN*2], b[ARR_LEN];
    printf("Enter string 1: ");
    fgets(a, ARR_LEN, stdin);
    printf("Enter string 2: ");
    fgets(b, ARR_LEN, stdin);

    int offset = 0;
    while(a[++offset] != '\0');
    for(int i=0; b[i] != '\0'; i++)
        a[offset++] = b[i];
    a[offset] = '\0';

    printf("String a is: %s\nString b is: %s", a, b);
}