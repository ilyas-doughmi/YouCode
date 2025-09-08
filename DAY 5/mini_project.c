#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void add();
void show();
void search();

char name[200][200] = {"\0"};
char number[200][200] = {"\0"};
bool found = false;

int size = sizeof(name) / sizeof(name[0]);

int main(){
    int choix;
    do{
        printf("+++++++++++++++++ Gestionnaire de Contacts +++++++++++++++++\n1.Ajouter un contact\n2.Afficher tous les contacts\n3.Rechercher un contact\n0.Quit\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\nChoose: ");
        scanf(" %d",&choix);

        switch(choix){
            case 1:add();break;
            case 2:show();break;
            case 3:search();break;
            case 0:system("cls");printf("Bye\n");break;
            default:printf("Unvalide Choix\n");break;
        }
    }while(choix != 0);
}



void add(){
    for(int i = 0 ; i < size ; i++){
        if(name[i][0] == '\0'){
            printf("Enter Name : ");
            getchar();
            fgets(name[i],sizeof(name[i]),stdin);
            name[i][name[i],strlen(name[i]) - 1] = '\0';
            printf("Enter Number: ");
            fgets(number[i],sizeof(number[i]),stdin);
            number[i][number[i],strlen(number[i]) - 1] = '\0';
            system("cls");
            printf("========= CONTACT ADDED ===========\n");
            printf("Name : %s\n",name[i]);
            printf("Phone Number : %s\n",number[i]);
            printf("========= CONTACT ADDED ===========\n");

            break;
        }
        else{
        }
    }
}

void show(){

            system("cls");
            printf("============ CONTACTS ===========\n");


    for(int i = 0; i < size ; i++){
        if(name[i][0] != '\0'){
                printf("NAME : %s\n",name[i]);
                printf("Phone Number : %s\n",number[i]);
                printf("====================================\n");
                found = true;
        }
        else{
            continue;
        }
    }

    if(!found){
        printf("NO CONTACT FOUND\n");
    }
    printf("\n");
}

void search(){
    char namer[300];
    getchar();
    printf("Enter name : ");
    fgets(namer,sizeof(namer),stdin);
    namer[strlen(namer) - 1] = '\0';
    bool founduser;

     for(int i = 0 ; i < size ; i++){
        if(strcmp(namer,name[i]) == 0){
            system("cls");
            printf("============== CONTACT FOUND =============\n");
            printf("NAME : %s\nPhone Number: %s\n",name[i],number[i]);
            printf("============================================\n");
            founduser = true;
            break;
        }
    }

    if(!founduser){
        system("cls");
        printf("========================");
        printf("\nNot Found\n");
                printf("========================\n");

    }
}