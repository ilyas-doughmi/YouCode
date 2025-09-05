#include <stdio.h>

void afficherNotes(float notes[], int taille) {
    printf("Les notes sont : ");
    for(int i = 0; i < taille; i++) {
        printf("%.2f ", notes[i]);
    }
    printf("\n");
}

float calculerMoyenne(float notes[], int taille) {
    float somme = 0;
    for(int i = 0; i < taille; i++) {
        somme += notes[i];
    }
    return somme / taille;
}

float trouverMax(float notes[], int taille) {
    float max = notes[0];
    for(int i = 1; i < taille; i++) {
        if(notes[i] > max) {
            max = notes[i];
        }
    }
    return max;
}

float trouverMin(float notes[], int taille) {
    float min = notes[0];
    for(int i = 1; i < taille; i++) {
        if(notes[i] < min) {
            min = notes[i];
        }
    }
    return min;
}

int main() {
    int n;
    printf("Combien de notes voulez-vous saisir ? ");
    scanf("%d", &n);

    float notes[n];

    for(int i = 0; i < n; i++) {
        printf("Entrez la note %d : ", i + 1);
        scanf("%f", &notes[i]);
    }

    afficherNotes(notes, n);

    float moyenne = calculerMoyenne(notes, n);
    printf("La moyenne est : %.2f\n", moyenne);

    float max = trouverMax(notes, n);
    printf("La note maximale est : %.2f\n", max);

    float min = trouverMin(notes, n);
    printf("La note minimale est : %.2f\n", min);

    return 0;
}
