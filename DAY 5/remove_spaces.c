#include <stdio.h>
#include <string.h>

int main(){


    char chain1[199];
    printf("Enter a sentence: ");
    fgets(chain1,sizeof(chain1),stdin);
    char chain2[9];

    int size = strlen(chain1);
    for(int i = 0 ; i <size ; i++){
        if(chain1[i] == ' '){
            continue;
        }
        else{
            printf("%c",chain1[i]);
        }
    }
}