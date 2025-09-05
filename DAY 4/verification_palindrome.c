#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char exp[50] = "bob";
    int size = strlen(exp);
    bool allworks = false;


    for(int i = size ; i >= 0 ; i--){
        for(int j = 0 ; j < size ; j++){
            if(i != j){
                if(exp[i] == exp[j]){
                    allworks = true;
                    continue;
                    break;
            }
             else{
                allworks = false;
            }
           
            }

        }

    }
    if(allworks){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
}