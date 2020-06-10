#ifndef _FONCTION_H
#define _FONCTION_H
typedef struct ENNEMY
   {
       
       SDL_Surface *sprite1 , * sprite2 , *sprite , *attleft , *attright;
       int x, y;
       int frameNumber, frameTimer;
       int direction ;
       int limite;

   } ENNEMY;
   
   extern SDL_Surface *loadImageN(char *name);

  #endif
