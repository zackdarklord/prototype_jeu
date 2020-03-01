#ifndef _PROTOTYPE_JEU_H
#define _PROTOTYPE_JEU_H

SDL_Surface entite1[2];
SDL_Surface entite2[2];

SDL_Rect posent1;
SDL_Rect posent2;

posent1.x=0;
posent1.y=0;

posent2.x=0;
posent2.y=0;

entite1[0]=IMG_Load("zombie0.png");
entite1[1]=IMG_Load("zombie1.png");
entite1[2]=IMG_Load("zombie2.png");
entite2[0]=IMG_Load("sorciere0.png");
entite2[1]=IMG_Load("sorciere1.png");
entite2[2]=IMG_Load("sorciere2.png");

#endif
