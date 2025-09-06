#include <stdio.h>



void copy(char str1[], char str2[]){
    int i = 0;
    
    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

}

int main(){
    char name1[500] = "Hello World";
    char name2[500];
    copy(name1,name2);

    printf("%s",name2);
}