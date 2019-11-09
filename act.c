#include "bibi.h"

void act1(Smonde *mape)
{
    you(mape, 49, 41);

    txt("psst hey toi.\nviens vers moi, avance de 5 pas\n\n", 32);

    but(mape, 44, 41);
    game(mape);

    txt("hey tu m'a rate! recule de 3 pas\n\n", 32);

    but(mape, 47, 41);

    
    game(mape);

    txt("t'es bigleu ou quoi? je suis 2 pas a ta droite!\n\n", 32);

    but(mape, 47, 43);
    game(mape);

    txt("comment t'a fait pour aller aussi loin? t'es au moins a 20 pas la!! bon tu sais quoi je me rapproche, va juste faire 1 pas sur ta gauche.\n\n", 32);

    but(mape, 47, 42);
    game(mape);

    txt("pas trop tot, au moins t'es capable de bouger dans se monde, ça t'evitera de finir bouffe par je ne sais quel bestiole\n\n", 32);

    changemap(mape);
}

