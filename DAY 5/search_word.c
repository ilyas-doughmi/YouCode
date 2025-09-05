#include <stdio.h>
#include <string.h>

int main(){

    char chain1[]="hello how are you";
    char chain2[9];
    printf("Enter a word to search: ");
    scanf(" %s",&chain2);

    char* result;
    result = strstr(chain1,chain2);

    if(result != NULL){
        printf("We Found IT !! \n");
    }
    else{
        printf("NOT FOUND\n");
    }
    
}