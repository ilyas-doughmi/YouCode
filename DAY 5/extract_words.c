#include <stdio.h>
#include <string.h>

void extract(char name[],int size){

    for(int i = 0 ; i < size ; i++){
        if(name[i] != ' '){
            printf("%c",name[i]);
        }
        else{
            printf("\n");
        }
    }
}

int main(){
    char name[500] = "Hello World";
    printf("Enter a text: ");
    fgets(name,sizeof(name),stdin);
    int size = strlen(name);
    printf("Words : %s",name);
    extract(name,size);
}