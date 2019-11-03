#include "bibi.h"

void act1(Smonde *mape)
{
    you(mape, 99, 51);

    txt("psst hey toi.\nviens vers moi, avance de 5 pas\n\n", 32);

    but(mape, 94, 51);
    game(mape);

    txt("hey tu m'a raté! recule de 3 pas\n\n", 32);

    but(mape, 97, 51);
    game(mape);

    txt("t'es bigleu ou quoi? je suis 2 pas à ta droite!\n\n", 32);

    but(mape, 97, 53);
    game(mape);

    txt("comment t'a fait pour aller aussi loin? t'es au moins à 20 pas la!! bon tu sais quoi je me rapproche, va juste faire 1 pas sur ta gauche.\n\n", 32);

    but(mape, 97, 52);
    game(mape);

    txt("pas trop tôt, au moins t'es capable de bouger dans se monde, pas donné à tout le monde\n\n", 32);
}

Bool yesiam(int i)
{
    if (i == 4)
        return true;

    return false;
}