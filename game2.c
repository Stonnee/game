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
void fuck(char grille[X][Y], int x, int y)
{
    int i;
    int j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            grille[i][j] = 0;
        }
      
    }
}

/*txt("psst hey toi.\nviens vers moi, avance de 5 pas\n\n",32);

  but(mape, 94, 51);

  game(mape);

  txt("hey tu m'a raté! recule de 2 pas\n\n",32);

  but(mape, 96, 51);
  game(mape);

  txt("t'es bigleu ou quoi? je suis 2 pas à ta droite!\n\n",32);

  but(mape, 96, 53);
  game(mape);

  txt("comment t'a fait pour aller aussi loin? t'es au moins à 20 pas!! bon tu sais quoi je me rapproche, va juste faire 1 pas sur ta gauche.\n\n",32);

  but(mape, 96, 52);
  game(mape);

  txt("pas trop tôt, au moins je vois que tu sais bouger dans se monde, pas donné à tout le monde\n\n",32);*/