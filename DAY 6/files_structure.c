#include <stdio.h>

typedef struct {
    char title[200];
    int year;
} Book;
    Book bk[3] = {{"BOOK 1",1920},{"Book 2",1990},{"book 3",2015}};

void save();
void load();
int main(){

    save();
    load();
    

}

void save(){
    FILE *fp = fopen("book.txt","w");
    if(fp == NULL){
        printf("Problem Creating File\n");
    }
    for(int i = 0 ; i < 3; i++){
        fprintf(fp,"%s %d\n",bk[i].title,bk[i].year);
    }
    

    fclose(fp);
}

void load(){
    char buffet[1024];
    FILE *fp = fopen("book.txt","r");

    if(fp == NULL){
        printf("Problem Reading FIle\n");
    }

    while(fgets(buffet,sizeof(buffet),fp)) {
        printf("%s",buffet);
    }

    fclose(fp);
}