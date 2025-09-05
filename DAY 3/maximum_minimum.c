#include <stdio.h>

int main() {
    int tableau[] = {5, 2, 8, 1, 8, 3};
    int n = 6;
    int recherche = 8;
    int i, occ = 0;

    for(i = 0; i < n; i++) {
        if(tableau[i] == recherche) {
            if(occ == 0) printf("Trouve aux positions: ");
            printf("%d ", i+1);
            occ++;
        }
    }

    if(occ == 0) {
        printf("Non trouve\n");
    } else {
        printf("\nPremiere position: ");
        for(i = 0; i < n; i++) {
            if(tableau[i] == recherche) {
                printf("%d\n", i+1);
                break;
            }
        }
        printf("Nombre d'occurrences: %d\n", occ);
    }

    return 0;
}
