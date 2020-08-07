#ifndef __BIBI__H__
#define __BIBI__H__
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define X 15
#define Y 31
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
    Bool action;
    
}Smonde;
/////////////////////////////////////////////game
void but(Smonde *mape, int x, int y);
void you(Smonde *mape, int x, int y);
int *crd(Smonde *mape, char cible);
void moove(Smonde *mape);
void afficherTableau(char grille[X][Y], int x, int y);
void game(Smonde *mape,char *argv);
void changemap(Smonde *mape, char *Map);
Bool obstacle(Smonde *mape, int x);
void hard(Smonde *mape);
void normal(Smonde *mape);
void txt(char *phrase, int vitesse);

//////////////////////////




#endif