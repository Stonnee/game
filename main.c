#include <stdio.h>
#include <stdlib.h>
#include "bibi.h"



int main()
{
//maps
 char plateau[100][101] = {0};

  //coordoner du but
  int B[2];

  but(plateau, 95, 51, B);
///////////////////////////
  int T[2];


  
  you(plateau, 100, 51, T);
  
while (crd(plateau, 'y') != crd(plateau, 'b'))
{
  moove(plateau);
  
  printf("1%c\n", plateau[95][51]);
  printf("1%c\n", plateau[96][51]);
  printf("2%c\n", plateau[97][51]);
  printf("3%c\n", plateau[98][51]);
  printf("4%c\n", plateau[99][51]);
  printf("5%c\n", plateau[100][51]);
  
  printf("\n");
  printf("\n");
  printf("**********************************\n");
}

 
  
  return 0;
}