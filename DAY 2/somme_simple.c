#include <stdio.h>

int main() {
    int nombres[3] = {10, 20, 30};
    int somme = 0;

    for(int i = 0; i < 3; i++) {
        somme += nombres[i];
    }

    printf("La somme des nombres est : %d\n", somme);
    return 0;
}
