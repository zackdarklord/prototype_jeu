void Point::move()
{
    //Bouge le point à gauche ou à droite
    x += xVel;
 
    //Si le point se rapproche trop des limites(gauche ou droite) de l'ecran
    if( ( x < 0 ) || ( x + POINT_WIDTH > LEVEL_WIDTH ) )
    {
        //On revient
        x -= xVel;
    }
 
    //Bouge le point en haut ou en bas
    y += yVel;
 
    //Si le point se rapproche trop des limites(haute ou basse) de l'ecran
    if( ( y < 0 ) || ( y + POINT_HEIGHT > LEVEL_HEIGHT ) )
    {
        //On revient
        y -= yVel;
    }
}
void Point::set_camera()
{
    //Centre la camera sur le point
    camera.x = ( x + POINT_WIDTH / 2 ) - SCREEN_WIDTH / 2;
    camera.y = ( y + POINT_HEIGHT / 2 ) - SCREEN_HEIGHT / 2;
      //Garde la camera sur les bords
    if( camera.x < 0 )
    {
        camera.x = 0;
    }
    if( camera.y < 0 )
    {
        camera.y = 0;
    }
    if( camera.x > LEVEL_WIDTH - camera.w )
    {
        camera.x = LEVEL_WIDTH - camera.w;
    }
    if( camera.y > LEVEL_HEIGHT - camera.h )
    {
        camera.y = LEVEL_HEIGHT - camera.h;
    }
}
void Point::show()
{
    //Affiche le point
    apply_surface( x - camera.x, y - camera.y, point, screen );
}
