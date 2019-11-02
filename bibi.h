#ifndef __BIBI__H__
#define __BIBI__H__
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define X 100
#define Y 101
#define windows  Sleep


char source(int source);
void but(char plateau[X][Y], int x, int y, int *B);
void you(char plateau[X][Y], int x, int y, int *T);
int *crd(char plateau[X][Y], char cible);
void moove(char plateau[X][Y]);
void afficherTableau(char grille[X][Y], int x, int y);
int lire(char *chaine, int longueur);
void game(char plateau[X][Y]);
///////////////////////////////////
void txt(char *phrase, int vitesse);

#endif