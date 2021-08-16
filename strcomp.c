#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char a[ARR_LEN], b[ARR_LEN];
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);

    int i = 0, mismatch = 0;
    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] != b[i]){
            mismatch = 1;
            break;
        }
        i++;
    }
    if(mismatch)
        printf("NOT equal");
    else
        printf("Equal");
}