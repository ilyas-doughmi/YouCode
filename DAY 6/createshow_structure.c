#include <stdio.h>
#include <string.h>

typedef struct {
    char titre[500];
    char Author[500];
    char annee[500];
}liv;

liv livre1;
liv livre2;
int main(){

    strcpy(livre1.titre,"C");
    strcpy(livre1.Author,"Kernighan");
    strcpy(livre1.annee, "1978");
    strcpy(livre2.titre,"JAVA");
    strcpy(livre2.Author,"Gosling");
    strcpy(livre2.annee, "1995");

    printf("%s %s %s\n",livre1.titre,livre1.Author,livre1.annee);
    printf("%s %s %s",livre2.titre,livre2.Author,livre2.annee);


}  