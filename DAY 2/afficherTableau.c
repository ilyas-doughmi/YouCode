#include <stdio.h>

void afficherTableau(int tab[], int taille) {
    for(int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int nombres[5] = {10, 20, 30, 40, 50};
    afficherTableau(nombres, 5);
    return 0;
}
