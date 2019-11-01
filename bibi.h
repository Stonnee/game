#ifndef __BIBI__H__
#define __BIBI__H__
#define X 100
#define Y 101


char source(int source);
void but(char plateau[X][Y], int x, int y, int *B);
void you(char plateau[X][Y], int x, int y, int *T);
int *crd(char plateau[X][Y], char cible);
void moove(char plateau[X][Y]);
void afficherTableau(char grille[X][Y], int x, int y);
int lire(char *chaine, int longueur);
#endif