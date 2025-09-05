#include <stdio.h>

void inverserTableau(int t[], int debut, int fin) {
    while(debut < fin) {
        int temp = t[debut];
        t[debut] = t[fin];
        t[fin] = temp;
        debut++;
        fin--;
    }
}

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int n = 5;

    inverserTableau(tableau, 0, n-1);

    printf("Tableau inverse: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
