#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char a[ARR_LEN], b[ARR_LEN];
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);
    int i;
    for(i=0; b[i] != '\0'; i++)
        a[i] = b[i];
    a[i] = '\0';

    printf("String a is: %s\nString b is: %s", a, b);
}