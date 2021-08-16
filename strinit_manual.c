#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
   char str[ARR_LEN] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
   printf("String is: %s", str);
}