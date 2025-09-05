#include <stdio.h>

int main(){
    char hello[15] = "hello";
    int size = sizeof(hello) / sizeof(hello[0]);

    for(int i = size - 1; i >= 0 ; i--){
        printf("%c",hello[i]);
    }
}