#include <stdio.h>

float calculerMoyenne(float notes[], int taille) {
    float somme = 0;
    for(int i = 0; i < taille; i++) {
        somme += notes[i];
    }
    return somme / taille;
}

int main() {
    float notes[4] = {15.5, 12.0, 18.0, 14.5};
    float moyenne = calculerMoyenne(notes, 4);
    printf("La moyenne est : %.2f\n", moyenne);
    return 0;
}
