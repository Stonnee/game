#include "bibi.h"

void debut()
{
    printf("\n\n");
    windows(1000);
    printf("mise e jour de l'invite de commande...\n\n\n\n\n");
    windows(4000);
    printf("ajout de l'extention ouverture des porte...\n\n\n\n");
    windows(2000);
    printf("alteration des du system d'exploitation\n\n\n\n\n\n\n\n");
    windows(2000);
    printf("ajout de la porte des lymbe...\n\n");
    windows(2000);
    printf("...\n\n\n\n\n");
    windows(4000);
    printf("ouverture\n\n");
    windows(4000);
    system("cls");
}

void txt(char *phrase, int vitesse)
{
    char *test = phrase;
    char c;

    for (int i = 0; test[i] != '\0'; i++)
    {
        c = test[i];
        windows(vitesse);
        printf("%c", c);
    }
}