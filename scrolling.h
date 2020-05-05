//Les attributs de l'écran (640 * 480)
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;
 
//Le nombre de frame par seconde
const int FRAMES_PER_SECOND = 30;
 
//Les dimensions du point (l'image qu'on va deplacer)
const int POINT_WIDTH = 20;
const int POINT_HEIGHT = 20;
 
//Vitesse de deplacement du point (en pixel par seconde)
const int POINT_VITESSE = 200;
 
//Les dimensions du niveau
const int LEVEL_WIDTH = 1280;
const int LEVEL_HEIGHT = 960;
 
//Les surfaces
SDL_Surface *point = NULL;
SDL_Surface *background = NULL;
SDL_Surface *screen = NULL;
 
//La structure d'événements que nous allons utiliser
SDL_Event event;
 
//La camera
SDL_Rect camera = { 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT };
class Point
{
    private:
    //Les coordonnées x et y du point
    int x, y;
 
    //La vitesse du point
    int xVel, yVel;
 
    public:
    //Initialisation des variables
    Point();
 
    //Recupere la touche pressee et ajuste la vitesse du point
    void handle_input();
 
    //Bouge le point
    void move();
 
    //Montre le point sur l'ecran
    void show();
 
    //Met la camera sur le point
    void set_camera();
};
