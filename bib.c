#include <stdio.h>
#include <stdlib.h>

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

void but(char plateau[100][101], int x, int y, char **B)
{

    plateau[x][y] = 'b';
    //B comme "but" = l'adresse de la localisation du but
    *B = &plateau[x][y];
}

void you(char plateau[100][101], int x, int y, char **T)
{

    plateau[x][y] = 'y';
    //B comme "but" = l'adresse de la localisation du but
    *T = &plateau[x][y];
}

void moove(char plateau[100][101])
{
    int l = 0;
    int c = 0;
    //char Action;
    //scanf("%c", &Action);
    printf("%d\n", l);
    printf("%d\n", c);

    for (int i = 0; plateau[c][l] != 'y' && i < 101; i++)
    {
        //printf("%d\n", l);
        //printf("%d\n", c);

        for (int i = 0; plateau[c][l] != 'y' && i < 101; i++)
        {

            l++;
            // printf("%d\n", l);
            //printf("%d\n", c);
        }
        if (plateau[c][l] != 'y')
        {
        c++;
        l = 0;
        }
    }

    printf("%d\n", l);
    printf("%d\n", c);
    printf("%c\n", plateau[c][l]);
}

void afficherTableau(char grille[100][101], int x, int y)
{
    int i;
    int j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d", grille[i][j]);
 
        }
        printf("\n");
    }
}