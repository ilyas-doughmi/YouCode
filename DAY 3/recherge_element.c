#include <stdio.h>

int main() {
    int n, i, recherche, occ = 0;

    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    int tableau[n];

    for(i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i+1);
        while(scanf("%d", &tableau[i]) != 1) {
            int c;
            while((c = getchar()) != '\n' && c != EOF);
            printf("Valeur invalide. Reentrez l'element %d: ", i+1);
        }
    }

    printf("Entrez le nombre a rechercher: ");
    scanf("%d", &recherche);

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
        printf("\nOccurrences: %d\n", occ);
    }

    return 0;
}
