#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
   char str[ARR_LEN];
   printf("Enter a string: ");
   fgets(str, ARR_LEN, stdin);
   printf("Your string is: %s", str);
}