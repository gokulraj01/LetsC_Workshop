#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char str[ARR_LEN];
    printf("Input word to check palindrome: ");
    scanf("%s", str);

    int len, palin = 1;
    for(len=0; str[len]!='\0'; len++);

    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-i-1])
            palin = 0;
            break;
    }
    if(palin)
        printf("It's a palaindrome");
    else
        printf("It's NOT a palaindrome");
}