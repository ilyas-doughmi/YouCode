#include <stdio.h>
#include <string.h>

typedef struct {
    char rue[100];
    char ville[50];
    int codePostal;
} Adresse;

typedef struct {
    char nom[50];
    int age;
    Adresse adresse;
} Personne;

int main() {
    Personne p1;
    strcpy(p1.nom, "ilyas");
    p1.age = 30;
    strcpy(p1.adresse.rue, "bab lkhmiss 99");
    strcpy(p1.adresse.ville, "taroudant");
    p1.adresse.codePostal = 83000;

    printf("Nom: %s\n", p1.nom);
    printf("Age: %d\n", p1.age);
    printf("Adresse: %s, %s, %d\n", p1.adresse.rue, p1.adresse.ville, p1.adresse.codePostal);

    return 0;
}
