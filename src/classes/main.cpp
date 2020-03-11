/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "snake.h"
#include <unistd.h>

using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();
    char Key;
    Point p(10,10); //Creation de point
    Point p2(11,10);
    Point p3(12,10);
    Snake s1; //Creation du serpent
    s1.ajouterPoint(p); //ajout de point
    s1.ajouterPoint(p2);//ajout de point
    s1.ajouterPoint(p3);//ajout de point
    
    
   	s1.afficher();    //Suite d'instruction pour faire bouger le snake 
   	usleep(500000);
   	s1.left();
   	s1.afficher();
   	usleep(500000);
   	s1.up();
   	s1.afficher();
   	usleep(500000);
   	s1.up();
   	s1.afficher();
   	usleep(500000);
   	s1.up();
   	s1.afficher();
   	usleep(500000);
   	s1.right();
   	s1.afficher();
   	usleep(500000);
   	s1.right();
   	s1.afficher();
   	usleep(500000);
   	s1.right();
   	s1.afficher();
   	usleep(500000);
   	s1.right();
   	s1.afficher();
   	usleep(500000);
   	s1.right();
   	s1.afficher();
   	usleep(500000);
   	s1.down();
   	s1.afficher();
   	usleep(500000);
   	s1.down();
   	s1.afficher();
   	usleep(500000);
   	s1.down();
   	s1.afficher();
   	usleep(500000);
   	s1.down();
   	s1.afficher();
   	usleep(500000);

   	    
    //p.drawPoint();
    /*do 
    {
    	p.erasePoint();
    	p.moveUp();
    	p.drawPoint();
    	sleep(1);
    	if(p.getY() == 1)
    			 p.setY(19);
    }while(Key != 'o');
    //Point p2(10,5);
    //p2.drawPoint();
    do
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
