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
    FILE *fp = fopen("book.dat","wb");
    if(fp == NULL){
        printf("Problem Creating File\n");
    }
    for(int i = 0 ; i < 3; i++){
        fwrite(bk,sizeof(Book),3,fp);
        return;
    }
    

    fclose(fp);
}

void load(){
    char booktemp[3];
    FILE *fp = fopen("book.dat","rb");

    if(fp == NULL){
        printf("Problem Reading FIle\n");
        return;
    }

    fread(bk,sizeof(Book),3,fp);

    fclose(fp);

    for(int i = 0 ; i < 3 ; i++){
        printf("%s %d\n",bk[i].title,bk[i].year);
    }
}