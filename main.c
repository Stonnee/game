#include <stdio.h>
#include <stdlib.h>

char source(int source)
{

  char *bare = NULL;

  bare = malloc(sizeof(source) * source);

  for (int i = 0; i < source; i++)
  {

    bare[i] = 'I';
  }

  printf("%s", bare);

  free(bare);
  return *bare;
}

void but(char plateau[100][101], int x, int y, char **B)
{

  plateau[x][y] = 'b';
 //B comme "but" = l'adresse de la localisation du but 
  *B = &plateau[x][y];
  
}


void you(char plateau[100][101], int x, int y, char **T)
{

  plateau[x][y] = 'y';
 //B comme "but" = l'adresse de la localisation du but 
  *T = &plateau[x][y];
  
}

int main()
{
//maps
 char plateau[100][101];

  //coordoner du but
  char *B = NULL;

  but(plateau, 35, 13, &B);
///////////////////////////
  char *T = NULL;
  
  you(plateau, 100, 51, &T);
  

  printf("%c\n", *B);  
  printf("%c\n", *T);  

  return 0;
}