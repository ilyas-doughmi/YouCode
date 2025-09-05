#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char titres[100][50] = {"\0"};
char auteurs[100][50] = {"\0"};
float prix[100] = {0};
int quantite[100] = {0};
bool trouve = false;
int stockageTotal = 0;
int ancienStock;
void ajouter();
void afficher();
void miseajour();
void rechercher();
void retour();
void supprimer();
void stockcomplet();

int main() {
    int choix = -1;
    do {
        system("cls");
        printf("======== BIBLIOTHEQUE =========\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le stock total\n");
        printf("0. Quitter\n");
        printf("================================\n");
        printf("Choix : ");
        scanf(" %d", &choix);
        getchar();

        switch (choix) {
            case 1: ajouter(); break;
            case 2: afficher(); break;
            case 3: rechercher(); break;
            case 4: miseajour(); break;
            case 5: supprimer(); break;
            case 6: stockcomplet(); break;
            case 0:
                system("cls");
                printf("Au revoir\n");
                break;
            default:
                printf("Choix invalide !\n");
        }
    } while (choix != 0);
    return 0;
}

void ajouter() {
    system("cls");
    for (int i = 0; i < 100; i++) {
        if (titres[i][0] == '\0') {
            printf("======== AJOUTER UN LIVRE ==========\n");
            printf("Titre : ");
            fgets(titres[i], sizeof(titres[i]), stdin);
            titres[i][strlen(titres[i]) - 1] = '\0';

            printf("Auteur : ");
            fgets(auteurs[i], sizeof(auteurs[i]), stdin);
            auteurs[i][strlen(auteurs[i]) - 1] = '\0';

            printf("Prix ($) : ");
            scanf(" %f", &prix[i]);

            printf("Quantite : ");
            scanf(" %d", &quantite[i]);
            getchar();
            stockageTotal += quantite[i];

            system("cls");
            printf("============== LIVRE AJOUTE ================\n");
            printf("TITRE    : %s\nAUTEUR   : %s\nPRIX     : %.2f $\nQUANTITE : %d\n\n",
                   titres[i], auteurs[i], prix[i], quantite[i]);
            retour();
            return;
        }
    }
    printf("Plus de place pour ajouter des livres !\n");
    retour();
}

void afficher() {
    system("cls");
    trouve = false;
    for (int i = 0; i < 100; i++) {
        if (titres[i][0] != '\0') {
            printf("===== LIVRE ======\n");
            printf("TITRE    : %s\nAUTEUR   : %s\nPRIX     : %.2f $\nQUANTITE : %d\n==================\n\n",
                   titres[i], auteurs[i], prix[i], quantite[i]);
            trouve = true;
        }
    }
    if (!trouve) {
        printf("\nAucun livre dans la bibliotheque.\nAjoutez-en un !\n\n");
    }
    retour();
}

void miseajour() {
    system("cls");
    char recherche[100];
    printf("Titre du livre a mettre a jour : ");
    fgets(recherche, sizeof(recherche), stdin);
    recherche[strlen(recherche) - 1] = '\0';
    trouve = false;
    for (int i = 0; i < 100; i++) {
        if (strcmp(titres[i], recherche) == 0) {
            printf("\n====== LIVRE TROUVE =======\n");
            printf("TITRE    : %s\nAUTEUR   : %s\nPRIX     : %.2f $\nQUANTITE : %d\n",
                   titres[i], auteurs[i], prix[i], quantite[i]);
            printf("\nNouvelle quantite : ");
            ancienStock = quantite[i];
            scanf(" %d", &quantite[i]);
            getchar();
            stockageTotal += quantite[i] - ancienStock;
            printf("Quantite mise a jour avec succes !\n");
            trouve = true;
            break;
        }
    }
    if (!trouve) {
        printf("\nLivre non trouve.\n");
    }
    retour();
}

void rechercher() {
    system("cls");
    char recherche[100];
    printf("Titre du livre a rechercher : ");
    fgets(recherche, sizeof(recherche), stdin);
    recherche[strlen(recherche) - 1] = '\0';
    trouve = false;
    for (int i = 0; i < 100; i++) {
        if (strcmp(titres[i], recherche) == 0) {
            printf("\n====== LIVRE TROUVE =======\n");
            printf("TITRE    : %s\nAUTEUR   : %s\nPRIX     : %.2f $\nQUANTITE : %d\n",
                   titres[i], auteurs[i], prix[i], quantite[i]);
            trouve = true;
            break;
        }
    }
    if (!trouve) {
        printf("\nLivre non trouve.\n");
    }
    retour();
}

void retour() {
    int choix;
    do {
        printf("\n1. Retourner au menu principal\n0. Quitter\nChoix : ");
        scanf("%d", &choix);
        getchar();
        if (choix == 0) {
            system("cls");
            printf("Au revoir\n");
            exit(0);
        } else if (choix == 1) {
            main();
            return;
        } else {
            printf("Choix invalide !\n");
        }
    } while (choix != 1 && choix != 0);
}

void supprimer() {
    char recherche[100];
    printf("Titre du livre a supprimer : ");
    fgets(recherche, sizeof(recherche), stdin);
    recherche[strlen(recherche) - 1] = '\0';
    trouve = false;
    for (int i = 0; i < 100; i++) {
        if (strcmp(recherche, titres[i]) == 0) {
            trouve = true;
            strcpy(titres[i], "\0");
            strcpy(auteurs[i], "\0");
            prix[i] = 0;
            stockageTotal -= quantite[i];
            quantite[i] = 0;
            printf("Livre supprime avec succes\n");
            break;
        }
    }
    if (!trouve) {
        printf("Aucun livre trouve avec ce titre : %s\n", recherche);
    }
    retour();
}

void stockcomplet() {
    printf("Stock total de livres : %d\n", stockageTotal);
    retour();
}
