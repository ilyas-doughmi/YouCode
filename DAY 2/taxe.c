#include <stdio.h>

int main() {
    float montant, montant_avec_taxe;

    printf("Entrez un montant : ");
    scanf("%f", &montant);

    montant_avec_taxe = montant * 1.05;

    printf("Avec taxe ajoutée : $%.2f\n", montant_avec_taxe);

    return 0;
}
