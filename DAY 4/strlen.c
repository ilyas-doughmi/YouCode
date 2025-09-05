#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    printf("Longueur : %d\n", i);
    return 0;
}
