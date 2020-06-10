#ifndef _FONCTION_H
#define _FONCTION_H
#include "structs.h"

 
   
extern  void drawEnnemy(Monstre * monstre , Gestion *jeu);
extern void drawhero(hero * he , Gestion *jeu);
extern SDL_Surface *loadImageN(char *name);
#endif
