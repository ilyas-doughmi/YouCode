#include <stdio.h>
#include <string.h>

int main(){
    char string1[100]= "hello";
    char string2[]= "hello";
    if(strcmp(string1,string2)  == 0){
        printf("Found");
    }
    else{
        printf("Not Found\n");
    }
    strcat(string1,string2);


} 