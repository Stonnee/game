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

void but(char plateau[100][101], int x, int y, int *B)
{

    plateau[x][y] = 'b';
    //B comme "but" = l'adresse de la localisation du but

    B[0] = x;
    B[1] = y;
}

void you(char plateau[100][101], int x, int y, int *T)
{

    plateau[x][y] = 'y';
    //B comme "but" = l'adresse de la localisation du but
    T[0] = x;
    T[1] = y;
}

int *crd(char plateau[100][101], char cible)
{
    int l = 0;
    int c = 0;
    
    for (int i = 0; plateau[c][l] != cible && i < 101; i++)
    {
        //printf("%d\n", l);
        //printf("%d\n", c);

        for (int i = 0; plateau[c][l] != cible && i < 101; i++)
        {

            l++;
            // printf("%d\n", l);
            //printf("%d\n", c);
        }
        if (plateau[c][l] != cible)
        {
        c++;
        l = 0;
        }
    }

    int *crd = malloc(sizeof(int) * 2);
   /* printf("%d\n", l);
    printf("%d\n", c);*/

        crd[0] = c;
        crd[1] = l;
    
    //printf("%c\n", plateau[c][l]);
    return crd;
}

void moove(char plateau[100][101])
{
    char Action;
    scanf("%c", &Action);

    int *xy = crd(plateau, 'y');

    if (Action == 'z')
    {
        plateau[xy[0]-1][xy[1]] = 'y';
        plateau[xy[0]][xy[1]] = 0;
    }
    if (Action == 'q')
    {
        plateau[xy[0]][xy[1]-1] = 'y';
        plateau[xy[0]][xy[1]] = 0;
    }
    if (Action == 'd')
    {
        plateau[xy[0]][xy[1]+1] = 'y';
        plateau[xy[0]][xy[1]] = 0;
    }
    if (Action == 's')
    {
        plateau[xy[0]+1][xy[1]] = 'y';
        plateau[xy[0]][xy[1]] = 0;
    }

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