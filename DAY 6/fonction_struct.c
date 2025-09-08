#include <stdio.h>

typedef struct{
    char* title[50];
    char* author[50];
    char* public[50];
}book;

book b1;

void affiche(char title[],char auth[],char pub[]){
    printf("%s %s %s",title,auth,pub);
}
int main(){

    b1.title[0] = "Antigone";
    b1.author[0] = "Sophocles";
    b1.public[0] = "1920";



    affiche(b1.title[0],b1.author[0],b1.public[0]);
}