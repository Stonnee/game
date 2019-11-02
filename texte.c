#include "bibi.h"

void txt(char *phrase, int vitesse)
{
    char *test = phrase;
    char c;

    for (int i = 0; test[i] != '\0'; i++)
    {
        c = test[i];
        windows(vitesse);
        printf("%c", c);
    }
}