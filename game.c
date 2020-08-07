#include "bibi.h"

void but(Smonde *mape, int x, int y)
{

    mape->plateau[x][y] = 'X';


    mape->B[0] = x;
    mape->B[1] = y;
}

void you(Smonde *mape, int x, int y)
{
    
    mape->plateau[x][y] = 'P';
   
    mape->T[0] = x;
    mape->T[1] = y;
}

int *crd(Smonde *mape, char cible)
{
    int l = 0;
    int c = 0;

    for (int i = 0; mape->plateau[c][l] != cible && i < Y; i++)
    {

        for (int i = 0; mape->plateau[c][l] != cible && i < Y; i++)
        {

            l++;
        }
        if (mape->plateau[c][l] != cible)
        {
            c++;
            l = 0;
        }
    }

    int *crd = malloc(sizeof(int) * 2);

    crd[0] = c;
    crd[1] = l;

    return crd;
}

void moove(Smonde *mape)
{
    
    char Action[2];
    scanf("%c", Action);
  

    int *xy = crd(mape, 'P');

    if (Action[0] == 'z')
    {
        if (obstacle(mape, 1))
        {
            mape->plateau[xy[0] - 1][xy[1]] = '#';
            mape->plateau[xy[0]][xy[1]] = 'P';
            txt("il y a maleureusement un mur...", 32);
        }
        else
        {
            mape->plateau[xy[0] - 1][xy[1]] = 'P';
            mape->plateau[xy[0]][xy[1]] = 0;
        }
    }
    if (Action[0] == 'q')
    {
        if (obstacle(mape, 4))
        {
            mape->plateau[xy[0]][xy[1] - 1] = '#';
            mape->plateau[xy[0]][xy[1]] = 'P';
            txt("il y a maleureusement un mur...", 32);
        }
        else
        {
            mape->plateau[xy[0]][xy[1] - 1] = 'P';
            mape->plateau[xy[0]][xy[1]] = 0;
            
        }
    }
    if (Action[0] == 'd')
    {
        if (obstacle(mape, 3))
        {
            mape->plateau[xy[0]][xy[1] + 1] = '#';
            mape->plateau[xy[0]][xy[1]] = 'P';
            txt("il y a maleureusement un mur...", 32);
        }
        else
        {
            mape->plateau[xy[0]][xy[1] + 1] = 'P';
            mape->plateau[xy[0]][xy[1]] = 0;
        }
    }
    if (Action[0] == 's')
    {
        if (obstacle(mape, 2))
        {
            mape->plateau[xy[0] + 1][xy[1]] = '#';
            mape->plateau[xy[0]][xy[1]] = 'P';
            txt("il y a maleureusement un mur...", 32);
        }

        else
        {
            mape->plateau[xy[0] + 1][xy[1]] = 'P';
            mape->plateau[xy[0]][xy[1]] = 0;
        }
    }
}

void game(Smonde *mape, char *argv)
{
  
    if(strcmp(argv, "--hardcore") == 0)
    hard(mape);
    else
    {
        normal(mape);
    }
    
    
}

void normal(Smonde *mape){

int *toi = crd(mape, 'P');
    int *fin = crd(mape, 'X');
  
    while ((toi[0] != fin[0]) || (toi[1] != fin[1]))
    {
        system("cls");
        
         afficherTableau(mape->plateau,X,Y);
    
        moove(mape);

        toi = crd(mape, 'P');
       
    }
}

void hard(Smonde *mape){
    char Action[100];
    scanf("%c", Action);
    int i= 0;
    while (Action[i] != ' ')
    {
        if(obstacle(mape,1) || obstacle(mape,2) || obstacle(mape,3) || obstacle(mape,4))
        system("cls");
        
         afficherTableau(mape->plateau,X,Y);
    
        moove(mape);
       
    }
}
