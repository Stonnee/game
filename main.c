#include <stdio.h>
#include <stdlib.h>
#include "bibi.h"

int main()
{

  debut();

  //maps
  char plateau[X][Y] = {0};

  //coordoner du but
  int B[2];

  but(plateau, 93, 52, B);
  ///////////////////////////
  int T[2];

  you(plateau, 99, 51, T);

  char *p = "JOOOOOOSUKE!!! qu'es-ce que tu pensse faire en mangean mon dernier flan vanille heiiiin?!";

  txt(p, 35);
  


  return 0;
}