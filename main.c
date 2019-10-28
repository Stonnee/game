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

  plateau[x][y] = 'p';
 //B comme "but" = l'adresse de la localisation du but 
  *B = &plateau[35][13];
  
}

int main()
{
//maps
 char plateau[100][101];

  //coordoner du but
  char *B = NULL;

  but(plateau, 35, 13, &B);
///////////////////////////

  printf("%c", *B);  

  return 0;
}