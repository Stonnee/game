#include <stdio.h>
#include <stdlib.h>
#include "bibi.h"



int main()
{
//maps
 char plateau[100][101] = {0};

  //coordoner du but
  char *B = NULL;

  but(plateau, 35, 13, &B);
///////////////////////////
  char *T = NULL;
  
  you(plateau, 100, 51, &T);
  

 /* printf("%c\n", *B);  
  printf("%c\n", *T); */ 
  moove(plateau);

  
  return 0;
}