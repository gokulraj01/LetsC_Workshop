#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char str[ARR_LEN];
    printf("Input string to reverse: ");
    scanf("%s", str);

    char revstr[ARR_LEN];

    int len;
    for(len=0; str[len]!='\0'; len++);
    len--;
    for(int i=len; i>=0; i--)
        revstr[len-i] = str[i];
    
    printf("Reversed String is: %s", revstr);
}