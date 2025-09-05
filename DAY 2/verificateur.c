#include <stdio.h>

int main() {
    int nombres[10] = {3, 7, 12, 5, 9, 21, 14, 8, 6, 10};
    int nombre, trouve = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for(int i = 0; i < 10; i++) {
        if(nombres[i] == nombre) {
            trouve = 1;
            break;
        }
    }

    if(trouve)
        printf("Le nombre %d est présent dans le tableau.\n", nombre);
    else
        printf("Le nombre %d n'est pas présent dans le tableau.\n", nombre);

    return 0;
}
