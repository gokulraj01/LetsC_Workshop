#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char a[ARR_LEN], b[ARR_LEN], c[2*ARR_LEN];
    printf("Enter string 1: ");
    fgets(a, ARR_LEN, stdin);
    printf("Enter string 2: ");
    fgets(b, ARR_LEN, stdin);

    int join_i = 0, i = 0;
    while(a[i] != '\0')
        c[join_i++] = a[i++];
    i = 0;
    while(b[i] != '\0')
        c[join_i++] = b[i++];
    c[join_i] = '\0';
    printf("Joined string is: %s", c);
}