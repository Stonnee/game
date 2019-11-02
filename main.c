#include "bibi.h"

int main()
{

  //debut();
  Smonde *mape = malloc(sizeof(Smonde));

  fuck(mape->plateau, X, Y);
  you(mape, 99, 51);

txt("psst hey toi.\nviens vers moi, avance de 5 pas\n\n",32);

  but(mape, 94, 51);
afficherTableau(mape->plateau, X, Y);
  game(mape);

  txt("hey tu m'a raté! recule de 2 pas\n\n",32);

  but(mape, 96, 51);
  game(mape);

  txt("t'es bigleu ou quoi? je suis 2 pas à ta droite!\n\n",32);

  but(mape, 96, 53);
  game(mape);

  txt("comment t'a fait pour aller aussi loin? t'es au moins à 20 pas la!! bon tu sais quoi je me rapproche, va juste faire 1 pas sur ta gauche.\n\n",32);

  but(mape, 96, 52);
  game(mape);

  txt("pas trop tôt, au moins je vois que tu sais bouger dans se monde, pas donné à tout le monde\n\n",32);
    

  
  

  

  afficherTableau(mape->plateau, X, Y);
  return 0;
}