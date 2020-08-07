#include "bibi.h"


void afficherTableau(char grille[X][Y], int x, int y)
{
    int i;
    int j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j+1 < y; j++)
        {
            printf("%c", grille[i][j]);
        }
        printf("\n");
    }
}

void changemap(Smonde *mape, char *Map)
{

    FILE *fichier = NULL;
    int i;
    int j;
    int x = X;
    int y = Y;

    fichier = fopen(Map, "r");
    if (fichier == NULL)
        printf("erreur ouverture fichier");

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {

            char c = fgetc(fichier);
            if (c != '\n')
            {
                if(c == '0')
                c = c - 48;
                int n = c;
                mape->plateau[i][j] = n;
                
            }
        }
    }

    fclose(fichier);
}

Bool obstacle(Smonde *mape, int x)
{
    int *etat = crd(mape, 'P');
    if (x == 1)
    {
        if (mape->plateau[etat[0] - 1][etat[1]] == '#')
            return true;
        else
        {
            return false;
        }
    }
    else if (x == 2)
    {
        if (mape->plateau[etat[0] + 1][etat[1]] == '#')
            return true;
        else
        {
            return false;
        }
    }

    else if (x == 3)
    {
        if (mape->plateau[etat[0]][etat[1] + 1] == '#')
            return true;
        else
        {
            return false;
        }
    }
    else if (x == 4)
    {
        if (mape->plateau[etat[0]][etat[1] - 1] == '#')
            return true;
        else
        {
            return false;
        }
    }

    return false;
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