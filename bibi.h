#ifndef __BIBI__H__
#define __BIBI__H__
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define X 100
#define Y 101
#define windows Sleep
#define stop system("pause");
////////////////////////////////////
typedef enum
    {
     false,
     true
    }Bool;

typedef struct Monde
{
    //maps
    char plateau[X][Y];

    //coordonée du but
    int B[2];

    
    int T[2];
    //tes coordonées
}Smonde;
/////////////////////////////////////////////game
char source(int source);
void but(Smonde *mape, int x, int y);
void you(Smonde *mape, int x, int y);
int *crd(Smonde *mape, char cible);
void moove(Smonde *mape);
void afficherTableau(char grille[X][Y], int x, int y);
int lire(char *chaine, int longueur);
void game(Smonde *mape);
void teleport(Smonde *mape);
void fuck(char grille[X][Y], int x, int y);
///////////////////////////////////texte
void debut();
void txt(char *phrase, int vitesse);
///////////////////////////act
void act1(Smonde *mape);
Bool yesiam(int i);




#endif