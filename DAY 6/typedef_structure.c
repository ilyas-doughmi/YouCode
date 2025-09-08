#include <stdio.h>
    typedef struct{
        char* name[500];
        char* model[500];
    }car;

    car car1;

int main(){

    car1.name[0] = "Dacia";
    car1.model[0] = "logan";

    printf("%s %s",car1.name[0],car1.model[0]);
}