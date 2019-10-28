#ifndef __BIBI__H__
#define __BIBI__H__

char source(int source);
void but(char plateau[100][101], int x, int y, char **B);
void you(char plateau[100][101], int x, int y, char **T);
char moove(char plateau[100][101]);
void afficherTableau(char grille[100][101], int x, int y);
#endif