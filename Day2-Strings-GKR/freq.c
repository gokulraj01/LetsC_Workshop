#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 256

void main(){
    char str[ARR_LEN];
    int freq[26];
    
    for(int i=0; i<26; i++)
        freq[i] = 0;

    printf("Input string to analyse: ");
    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            int index = str[i]-'a';
            freq[index]+=1;
        }
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0)
            printf("%c --> %d\n", ('a'+i), freq[i]);
    }
}