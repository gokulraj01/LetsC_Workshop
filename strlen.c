#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
   char str[ARR_LEN];
   printf("Enter a string: ");
   fgets(str, ARR_LEN, stdin);

   int len;
   for(len=0; str[len] != '\0'; len++);
   printf("Length is: %d", len);
}