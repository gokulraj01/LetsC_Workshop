#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char str[ARR_LEN];
    printf("Enter a String: ");
    scanf("%s", str);
    printf("The string is %s", str);
}