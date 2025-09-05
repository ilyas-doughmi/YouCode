#include <stdio.h>

int main() {
    int nombres[5] = {1, 2, 3, 4, 5};

    printf("Tableau à l'envers : ");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", nombres[i]);
    }
    printf("\n");

    return 0;
}
