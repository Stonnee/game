#include "bibi.h"

void action(Smonde *mape)
{
    if (mape->action)
    {
        int *stc = crd(mape, 'y');

        if ((stc[0] == 25) && (stc[1] == 16))
        {
            txt("je suis vraiment content, je viens de cree mon premier semblant de booleen...je ne sais vraiment pas si c'est du 100% mais bon...au moins tu...je..", 39);
            windows(2500);
            txt("peux voir ce message", 32);
        }

        else if ((stc[0] == 46) && (stc[1] == 4))
        {
            txt("ici est caché un mot de pouvoir, que les anciens cachais, pourles rare humain qui trouveron ce message..\n", 37); windows(400);
            txt("'t'...", 32); windows(300); txt("est votre salut", 32);
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        system("pause");








    }
}
