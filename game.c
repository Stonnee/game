#include "bibi.h"

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    // On lit le texte saisi au clavier
    if (fgets(chaine, longueur, stdin) != NULL) // Pas d'erreur de saisie ?
    {
        positionEntree = strchr(chaine, '\n'); // On recherche l'"Entrée"
        if (positionEntree != NULL)            // Si on a trouvé le retour à la ligne
        {
            *positionEntree = '\0'; // On remplace ce caractère par \0
        }
        return 1; // On renvoie 1 si la fonction s'est déroulée sans erreur
    }
    else
    {
        return 0; // On renvoie 0 s'il y a eu une erreur
    }
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

void but(char plateau[X][Y], int x, int y, int *B)
{

    plateau[x][y] = 'b';
    //B comme "but" = l'adresse de la localisation du but

    B[0] = x;
    B[1] = y;
}

void you(char plateau[X][Y], int x, int y, int *T)
{

    plateau[x][y] = 'y';
    //B comme "but" = l'adresse de la localisation du but
    T[0] = x;
    T[1] = y;
}

int *crd(char plateau[X][Y], char cible)
{
    int l = 0;
    int c = 0;

    for (int i = 0; plateau[c][l] != cible && i < Y; i++)
    {
        //printf("%d\n", l);
        //printf("%d\n", c);

        for (int i = 0; plateau[c][l] != cible && i < Y; i++)
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

void moove(char plateau[X][Y])
{
    char Action[2];

    lire(Action, 2);
    printf("%c\n", Action);
    printf("\n\n");

     int *xy = crd(plateau, 'y');

    if (Action[0] == 'z')
    {
        plateau[xy[0]-1][xy[1]] = 'y';
        plateau[xy[0]][xy[1]] = 0;  
    }
    if (Action[0] == 'q')
    {
        plateau[xy[0]][xy[1]-1] = 'y';
        plateau[xy[0]][xy[1]] = 0;
    }
    if (Action[0] == 'd')
    {
        plateau[xy[0]][xy[1]+1] = 'y';
        plateau[xy[0]][xy[1]] = 0;
    }
    if (Action[0] == 's')
    {
        plateau[xy[0]+1][xy[1]] = 'y';
        plateau[xy[0]][xy[1]] = 0;
    }
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

void game(char plateau[X][Y])
{
int *fin = crd(plateau, 'b');
 
  int *toi = crd(plateau, 'y');
 

  while ((toi[0] != fin[0]) || (toi[1] != fin[1]))
  {
     printf("%d\n%d\n", fin[0], fin[1]);
      printf("%d\n%d\n\n\n", toi[0], toi[1]);

    //afficherTableau(plateau, X, Y);
    moove(plateau);
    
    toi = crd(plateau, 'y');

   /*  printf("1%c\n", plateau[95][51]);
    printf("1%c\n", plateau[96][51]);
    printf("2%c\n", plateau[97][51]);
    printf("3%c\n", plateau[98][51]);
    printf("4%c\n", plateau[99][51]);
    printf("5%c\n", plateau[100][51]);*/

    /*printf("\n");
    printf("\n");
    printf("**********************************\n");
    system("cls");*/
  }
}