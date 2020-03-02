/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p(10,4);
    p.drawPoint();
    //Point p2(10,5);
    //p2.drawPoint();
    //cout << "press any key to quit" << endl;
    int Key = getch();
    if(Key == 'z')
    {
    	p.erasePoint();
    	p.moveUp();
    	p.drawPoint();
    }
    if(Key == 's')
    {
    	p.erasePoint();
    	p.moveDown();
    	p.drawPoint();
    }
    getch();
    fenetre->kill();
    return 0;
}
