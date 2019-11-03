#include "bibi.h"

void debut()
{
    /*printf("\n\n");
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
    windows(4000);*/
    txt("\nah?",32);
    windows(2000);
    txt("\nétrange...",32);
    windows(2000);
    txt("vous voici dans un endroit totalement sombre,",32);
    windows(1500);
    txt("\n pas un seul rayon de lumière, le noir complet.",32);
     windows(1500);
    txt("\nil ne fait nit chaud ni froid.",32);
    windows(1500);
    txt("\nni humide ni sec.",32);
    windows(1500);
    txt("\net vous n'avez ni fain ni non-faim.",32);
    windows(4000);
    system("cls");
    txt("\nvous êtes dans les lymbe...",32);
    windows(4000);
    system("cls");
    txt("\nmais,", 32);
    windows(1000);
    txt("je me demande bien pourquoi vous êtes ici?",32);
    windows(1000);
    txt("\nje veux dire,",32);
    windows(700);
    txt(" ce n'est pas le genre d'endroit ou les humains viennent se balader habituellement...",32);
    windows(2700);
    txt("\ndans tout les cas. vous devrier peut être...",32);
    windows(1000);
    txt("partir?",32);
    windows(3000);
    system("cls");
    txt("ah?...",32);
    windows(700);
    txt("vous ne pouvez pas?..",32);
    windows(2500);
    txt("dans ce cas peut être que vous trouverez quelqu'un pour vous aider",32);
    printf("\n\n\n\n\n\n\n\n\n\n");
    system("pause");
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