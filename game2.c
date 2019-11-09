#include "bibi.h"

void teleport(Smonde *mape)
{
    int *tp = crd(mape, 'y');
    mape->plateau[tp[0]][tp[1]] = 0;
    txt("vous ressentez comme un étrange chaleur vous envaïre\n", 32);
    windows(700);
    you(mape, mape->T[0], mape->T[1]);
    txt("vous êtes arrivez à destination\n", 32);
}

char source(int source)
{

    char *bare = NULL;

    bare = malloc(sizeof(source) * source);

    for (int i = 0; i < source; i++)
    {

        bare[i] = 'I';
    }

    printf("%s", bare);

    free(bare);
    return *bare;
}



void afficherTableau(char grille[X][Y], int x, int y)
{
    int i;
    int j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d", grille[i][j]);
        }
        printf("\n");
    }
}
void fuck(char grille[X][Y])
{
    int i;
    int j;
    int x = X;
    int y = Y;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            grille[i][j] = 0;
        }
    }
}

void changemap(Smonde *mape)
{

    FILE *fichier = NULL;
    int i;
    int j;
    int x = X;
    int y = Y;

    fichier = fopen("map/maptest.txt", "r");
    if (fichier == NULL)
        printf("erreur ouverture fichier");

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {

            char c = fgetc(fichier);
            if (c != '\n')
            {
                int n = c - 48;
                mape->plateau[i][j] = n;
                
            }
        }
    }

    fclose(fichier);
}

Bool obstacle(Smonde *mape, int x)
{
    int *etat = crd(mape, 'y');
    if (x == 1)
    {
        if (mape->plateau[etat[0] - 1][etat[1]] == 1)
            return true;
        else
        {
            return false;
        }
    }
    else if (x == 2)
    {
        if (mape->plateau[etat[0] + 1][etat[1]] == 1)
            return true;
        else
        {
            return false;
        }
    }

    else if (x == 3)
    {
        if (mape->plateau[etat[0]][etat[1] + 1] == 1)
            return true;
        else
        {
            return false;
        }
    }
    else if (x == 4)
    {
        if (mape->plateau[etat[0]][etat[1] - 1] == 1)
            return true;
        else
        {
            return false;
        }
    }

    return false;
}