#include <stdio.h>
#include <string.h>
void remplace(char name[],char remplacee,char remplacewith,int size){
    for(int i = 0 ; i < size ; i++){
        if(name[i] == remplacee){
            printf("%c",remplacewith);
        }
        else{
            printf("%c",name[i]);
        }
    }
}

int main()
{
    char name[500];
    printf("Enter Text: ");
    fgets(name,sizeof(name),stdin);
    int size = strlen(name);
    char remplacee;
    char remplacedwith;
    printf("Caractère à remplacer : ");
    scanf(" %c",&remplacee);
    printf("Nouveau caractère : ");
    scanf(" %c",&remplacedwith);
    
   remplace(name,remplacee,remplacedwith,size);
}