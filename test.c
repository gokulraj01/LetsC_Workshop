#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

struct Array{
    char arr[ARR_LEN];
    size_t len;
};

void main(){
   printf("%d", sizeof(int));
   struct Array arr = {'h', 'e', '\0'};
   printf("%s %d", arr.arr, arr.len);
}