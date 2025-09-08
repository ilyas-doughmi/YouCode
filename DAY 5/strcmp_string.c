#include <stdio.h>

int stricmp(char str1[],char str2[]){
    int i = 0;
    while(str1[i] !='\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return 1;
        }
        i++;
    }
    return 0;

}
int main(){
    char str1[200] = "hello";
    
    char str2[200] = "helloo";

    if(stricmp(str1,str2) == 0){
        printf("Found");
    }
    else{
        printf("Not Found\n");
    }
}