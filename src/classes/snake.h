#include "Point.h"
#include <ncurses.h>

class Snake
{

	private:

		Point serpent[20];
		int m_index;
		char m_direction;

	public:

		Snake(); //Constructeur pas default 

		void ajouterPoint(Point p); //methode pour ajouer un point
		void afficher();//methode pour afficher
		void up(); //methode pour monter en haut
		void down(); //methode pour aller en bas
		void right(); //methode pour aller à droite 
		void left(); //methode pour aller à gauche
};
