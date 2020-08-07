#include "bibi.h"

int main(int argc, char * argv[])
{

  //debut();
  Smonde *mape = malloc(sizeof(Smonde));

    changemap(mape, argv[1]);
    int *in = crd(mape,'P');
    int *out = crd(mape,'X');
   
 you(mape, in[0], in[1]);
 but(mape, out[0], out[1]);
 
  game(mape, argv[2]);
  txt("incroyable, tu a accomplie quelque chose dans ta vie.\n", 32);
    

  return 0;
}