#include <stdio.h>
#include <stdlib.h>
#include "bibi.h"



int main()
{
//maps
 char plateau[100][101] = {0};

  //coordoner du but
  char *B;

  but(plateau, 35, 13, &B);
///////////////////////////
  int *T;

  printf("%d\n", T[0]);
  printf("%d\n", T[1]);
  
  you(plateau, 100, 51, &T);
  
  printf("%d\n", T[0]);
  printf("%d\n", T[1]);

 /* printf("%c\n", *B);  
  printf("%c\n", *T); */

  /*printf("%c\n", plateau[99][51]); 
  printf("%c\n", plateau[100][51]); 
  moove(plateau);
   printf("%c\n", plateau[99][51]); 
  printf("%c\n", plateau[100][51]);
*/
  
  return 0;
}