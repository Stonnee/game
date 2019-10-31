#include <stdio.h>
#include <stdlib.h>
#include "bibi.h"



int main()
{
//maps
 char plateau[100][101] = {0};

  //coordoner du but
  int B[2];

  but(plateau, 35, 13, B);
///////////////////////////
  int T[2];


  printf("%d\n", T[0]);
  printf("%d\n", T[1]);
  
  you(plateau, 100, 51, T);
  
  printf("%d\n", T[0]);
  printf("%d\n", T[1]);

 
  
  return 0;
}