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

void but(char plateau[100][100], int x, int y, char **B)
{

  plateau[x][y] = 'p';
  
  *B = &plateau[35][13];

  printf("%a\n", *B);
  printf("%c\n", plateau[35][13]);
  
}

int main()
{

  char plateau[100][100];
  
  char *B = NULL;

  but(plateau, 35, 13, &B);

  printf("%c", *B);  

  return 0;
}