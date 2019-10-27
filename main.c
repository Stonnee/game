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

void but(char plateau[100][100], int x, int y)
{

  B = 0;
   plateau[x][y] = 'p';
  
  B = &plateau[x][y];
  
}

int main()
{

  char plateau[100][100];
  

  but(plateau, 35, 13);





  printf("%c", *B);
  

  return 0;
}