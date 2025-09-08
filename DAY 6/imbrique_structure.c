#include <stdio.h>

struct personne{
    char* Nom[50];
    char* adres[50];
};

struct personne p1;
int main(){
    p1.Nom[0] = "Alice"; 
    p1.adres[0] = "123 Rue Principale, Paris";

    printf("%s %s",p1.Nom[0],p1.adres[0]);

}