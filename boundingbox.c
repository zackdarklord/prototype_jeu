


/**
* @file boundingbox.c
* @brief Testing Program.
* @author escapethebookteam
* @version 0.1
* 
*  programme de test de collision
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>


int bounding_box ( SDL_Rect personnage ,SDL_rect entite)
{
int personnaga_bas=personnage.y+personnage.h;
int personnage_haut=personnage.y;
int personnage_droite=personnage.x+personnage.w;
int personnage_gauche=personnage.x;
int entite_bas=entite.y+entite.h;
int entite_haut=entite.y;
int entite_droite=entite.x+entite.w;
int entite_gauche=entite.x;
int collision;
if(personnage_droite < entite_gauche || personnage_gauche > entite_droite || personnage_bas < entite_haut || personnage_haut > entite_bas)
{
collision=0;
}
else 
{
collision=1;
}
return collision;
}
