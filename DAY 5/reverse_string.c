#include <stdio.h>
#include <string.h>

void swap(char name[],int size){
    
    for(int i = size - 1; i >= 0 ; i--){
        printf("%c",name[i]);
    }
}

int main(){

    char name[500] = "hello";
    printf("Enter a text: ");
    getchar();
    fgets(name,sizeof(name),stdin);
    int size = strlen(name);

    swap(name,size);
}