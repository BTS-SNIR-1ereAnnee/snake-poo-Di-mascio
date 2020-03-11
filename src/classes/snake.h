#include "Point.h"
#include <ncurses.h>

class Snake
{

	private:

		Point serpent[20];
		int m_index;

	public:

		Snake();

		void ajouterPoint(Point p);
		void afficher();
		void deplacerPoint();
};