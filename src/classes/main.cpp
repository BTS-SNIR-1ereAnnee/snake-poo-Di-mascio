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
    char Key = getch();
    Point p(10,4);
    p.drawPoint();
    p.erasePoint();
    p.moveUp();
    p.drawPoint();
    p.moveLeft();
    p.drawPoint();
    p.moveDown();
    p.drawPoint();
    p.moveRight();
    p.drawPoint();

    //Point p2(10,5);
    //p2.drawPoint();
    /*do
    {
    	Key = getch();
	    p.erasePoint();
    	switch(Key)
    	{
	    	case 'z':
	    		p.moveUp();
	    		break;
    		case 'q':
    			p.moveLeft();
    			break;
	    	case 's':
    			p.moveDown();
    			break;
    		case 'd':
    			p.moveRight();
    			break;

    	}
    	p.drawPoint();
    }while(Key != 'p');*/
    getch();
    fenetre->kill();
    return 0;
}
