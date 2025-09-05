#include <stdio.h>

int main() {
    int montant;
    
    printf("Entrez un montant en dollars : ");
    scanf("%d", &montant);

    int billets20 = montant / 20;
    montant = montant % 20;

    int billets10 = montant / 10;
    montant = montant % 10;

    int billets5 = montant / 5;
    montant = montant % 5;

    int billets1 = montant;

    printf("Billets de 20$ : %d\n", billets20);
    printf("Billets de 10$ : %d\n", billets10);
    printf("Billets de 5$ : %d\n", billets5);
    printf("Billets de 1$ : %d\n", billets1);

    return 0;
}
