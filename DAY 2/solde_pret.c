#include <stdio.h>

int main() {
    float montant, taux, paiement, taux_mensuel;

    printf("Entrez le montant du prêt : ");
    scanf("%f", &montant);
    printf("Entrez le taux d'intérêt annuel (en pourcentage) : ");
    scanf("%f", &taux);
    printf("Entrez le paiement mensuel : ");
    scanf("%f", &paiement);

    taux_mensuel = taux / 12;
    printf("Taux d'intérêt mensuel : %.2f%%\n\n", taux_mensuel);

    montant = montant + (montant * taux / 100 / 12) - paiement;
    printf("Solde restant après le premier paiement : $%.2f\n", montant);

    montant = montant + (montant * taux / 100 / 12) - paiement;
    printf("Solde restant après le deuxième paiement : $%.2f\n", montant);

    montant = montant + (montant * taux / 100 / 12) - paiement;
    printf("Solde restant après le troisième paiement : $%.2f\n", montant);

    return 0;
}
