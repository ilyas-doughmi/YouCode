#include <stdio.h>

int strl(char name[]){
    int i = 0;

    while(name[i] != '\0'){
        i++;
    }

    return i;
}

int main(){
    char name[500] ;

    printf("Enter a sentence : ");
    getchar();
    fgets(name,sizeof(name),stdin);
    int size = strl(name);

    printf("String strlen is %d",size);
}