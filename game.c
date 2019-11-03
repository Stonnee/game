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
    char Action[3];

    lire(Action, 3);
    /*printf("%c\n", Action);
    printf("\n\n");*/

     int *xy = crd(mape, 'y');

    if (Action[0] == 'z')
    {
        mape->plateau[xy[0]-1][xy[1]] = 'y';
        mape->plateau[xy[0]][xy[1]] = 0;  
    }
    if (Action[0] == 'q')
    {
        mape->plateau[xy[0]][xy[1]-1] = 'y';
        mape->plateau[xy[0]][xy[1]] = 0;
    }
    if (Action[0] == 'd')
    {
        mape->plateau[xy[0]][xy[1]+1] = 'y';
        mape->plateau[xy[0]][xy[1]] = 0;
    }
    if (Action[0] == 's')
    {
        mape->plateau[xy[0]+1][xy[1]] = 'y';
        mape->plateau[xy[0]][xy[1]] = 0;
    }
    if (Action[0] == 't')
    {
        teleport(mape);
    }
    if (Action[0] == 'm')
    {
        afficherTableau(mape->plateau, X, Y);
        printf("\n\n\n\n\n\n\n\n\n");
        system("pause");
    }
    
}



void game(Smonde *mape)
{
    
int *fin = crd(mape, 'b');
 
  int *toi = crd(mape, 'y');
 

  while ((toi[0] != fin[0]) || (toi[1] != fin[1]))
  {
     /*printf("%d\n%d\n", fin[0], fin[1]);
      printf("%d\n%d\n\n\n", toi[0], toi[1]);*/

    //afficherTableau(plateau, X, Y);
    moove(mape);
    
    toi = crd(mape, 'y');

     /*printf("1%c\n", plateau[95][51]);
    printf("1%c\n", plateau[96][51]);
    printf("2%c\n", plateau[97][51]);
    printf("3%c\n", plateau[98][51]);
    printf("4%c\n", plateau[99][51]);
    printf("5%c\n", plateau[100][51]);*/

    /*printf("\n");
    printf("\n");
    printf("**********************************\n");*/
    system("cls");
  }
}

