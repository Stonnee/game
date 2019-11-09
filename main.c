#include "bibi.h"

int main()
{

  //debut();
  Smonde *mape = malloc(sizeof(Smonde));

  fuck(mape->plateau);
   act1(mape);
 
 but(mape, 30,48);
 you(mape, 46, 42);
  game(mape);
  txt("vous vous sentez lege, comme si vous voliez..\n", 32);
  txt("...", 32); windows(500); txt("ah non...", 32);windows(1000);txt("vous tombez",32);
  windows(4000);
  system("cls");
  you(mape, 48, 4);

  but(mape, 30, 37);
  for (int i = 0; i < 2; i++)
  {
     moove(mape);
  }
  txt("il semble que vous soyer tombe dans une crevasse,", 32);windows(500); txt("mais il y a aussi un inscription au sole.\n", 32);windows(500); txt("en appuyant sur la touche d'action je pourrais vous la lire.", 32);
  
 
  game(mape);
  

  // game(mape);

 



  return 0;
}