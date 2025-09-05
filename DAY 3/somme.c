#include <stdio.h>

int main() {
    int n, i;
    int somme = 0;
    float moyenne;

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
        somme += tableau[i];
    }

    moyenne = (float)somme / n;

    printf("Somme: %d\n", somme);
    printf("Moyenne: %.2f\n", moyenne);

    return 0;
}
