#include <stdio.h>

int main() {
    int tableau[] = {5, 2, 8, 1};
    int n = 4;
    int i, j, temp;
    int echanges = 0;
    int comparaisons = 0;

    for(i = 0; i < n-1; i++) {
        int echangeEffectue = 0;
        for(j = 0; j < n-1-i; j++) {
            comparaisons++;
            if(tableau[j] > tableau[j+1]) {
                temp = tableau[j];
                tableau[j] = tableau[j+1];
                tableau[j+1] = temp;
                echanges++;
                echangeEffectue = 1;
            }
        }
        if(echangeEffectue == 0) {
            break;
        }
    }

    printf("Tableau trie: ");
    for(i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    printf("Nombre de comparaisons: %d\n", comparaisons);
    printf("Nombre d'echanges: %d\n", echanges);

    return 0;
}
