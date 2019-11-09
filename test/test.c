#include <stdio.h>
#include <conio.h>

int main()
{
   
    printf("Appuyez sur une touche pour quitter. Moi pendant ce temps, je compte...\n");
    while(!kbhit())
    {
       
    }
    char c = getch();
    printf("Fini ! %c \n", c);
    return 0;
}