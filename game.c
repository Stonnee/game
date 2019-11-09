#include "bibi.h"

void but(Smonde *mape, int x, int y)
{

    mape->plateau[x][y] = 'b';
    //B comme "but" = l'adresse de la localisation du but

    mape->B[0] = x;
    mape->B[1] = y;
}

void you(Smonde *mape, int x, int y)
{
    
    mape->plateau[x][y] = 'y';
    //y comme "you" = l'adresse de la localisation du but
    mape->T[0] = x;
    mape->T[1] = y;
}

int *crd(Smonde *mape, char cible)
{
    int l = 0;
    int c = 0;

    for (int i = 0; mape->plateau[c][l] != cible && i < Y; i++)
    {
        //printf("%d\n", l);
        //printf("%d\n", c);

        for (int i = 0; mape->plateau[c][l] != cible && i < Y; i++)
        {

            l++;
            // printf("%d\n", l);
            //printf("%d\n", c);
        }
        if (mape->plateau[c][l] != cible)
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

void moove(Smonde *mape)
{
    
     while(!kbhit())
    {

        /* windows(500);
        printf("%c", getch()); */
    }
    
    
    char Action = getch();
    printf("%c\n", Action);
    windows(200);

    int *xy = crd(mape, 'y');

    if (Action == 'z')
    {
        if (obstacle(mape, 1))
        {
            mape->plateau[xy[0] - 1][xy[1]] = 1;
            mape->plateau[xy[0]][xy[1]] = 'y';
            txt("il y a maleureusement un mur...", 32);
        }
        else
        {
            mape->plateau[xy[0] - 1][xy[1]] = 'y';
            mape->plateau[xy[0]][xy[1]] = 0;
        }
    }
    if (Action == 'q')
    {
        if (obstacle(mape, 4))
        {
            mape->plateau[xy[0]][xy[1] - 1] = 1;
            mape->plateau[xy[0]][xy[1]] = 'y';
            txt("il y a maleureusement un mur...", 32);
        }
        else
        {
            mape->plateau[xy[0]][xy[1] - 1] = 'y';
            mape->plateau[xy[0]][xy[1]] = 0;
            
        }
    }
    if (Action == 'd')
    {
        if (obstacle(mape, 3))
        {
            mape->plateau[xy[0]][xy[1] + 1] = 1;
            mape->plateau[xy[0]][xy[1]] = 'y';
            txt("il y a maleureusement un mur...", 32);
        }
        else
        {
            mape->plateau[xy[0]][xy[1] + 1] = 'y';
            mape->plateau[xy[0]][xy[1]] = 0;
        }
    }
    if (Action == 's')
    {
        if (obstacle(mape, 2))
        {
            mape->plateau[xy[0] + 1][xy[1]] = 'y';
            mape->plateau[xy[0]][xy[1]] = 1;
            txt("il y a maleureusement un mur...", 32);
        }

        else
        {
            mape->plateau[xy[0] + 1][xy[1]] = 'y';
            mape->plateau[xy[0]][xy[1]] = 0;
        }
    }
    if (Action == 't')
    {
        teleport(mape);
    }
    if (Action == 'm')
    {
        afficherTableau(mape->plateau, X, Y);
        printf("\n\n\n\n\n\n\n\n\n");
        system("pause");
    }
    if (Action == 'a')
    {
        mape->action = true;
        action(mape);
        mape->action = false;
    }
}

void game(Smonde *mape)
{

    int *toi = crd(mape, 'y');
    int *fin = crd(mape, 'b');

    while ((toi[0] != fin[0]) || (toi[1] != fin[1]))
    {

        //afficherTableau(plateau, X, Y);
        moove(mape);

        toi = crd(mape, 'y');

        /*printf("\n");
    printf("\n");
    printf("**********************************\n");*/
        system("cls");
    }
}
