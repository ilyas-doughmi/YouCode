#include <stdio.h>
#include <string.h>

void majuscule(char name[],int size){
    for(int i = 0 ; i < size ; i++){
        if(name[i] == ' '){
            printf(" ");
        }
        else if(name[i] >= 91 && name[i] <= 122){
                printf("%c",name[i] - 32);
        }
        else if(name[i] >= 65 || name[i] <= 90){
            printf("%c",name[i]);
        }
    }

}

void miniscule(char name[],int size){
    for(int i = 0 ; i < size ; i++){
        if(name[i] == ' '){
            printf(" ");
        }
        else if(name[i] >= 91 && name[i] <= 122){
                printf("%c",name[i]);
        }
        else if(name[i] >= 65 || name[i] <= 90){
            printf("%c",name[i] + 32);
        }
    }
}

int main(){
    char name[500];
    printf("Enter a text : ");
    fgets(name,sizeof(name),stdin);
    int size = strlen(name);

    majuscule(name,size);
    printf("\n");
    miniscule(name,size);

}