#include "Point.h"
#include <ncurses.h>

class Snake
{

	private:

		Point serpent[20];
		int m_index;

	public:

		void ajouterPoint(Point p);
		void afficher();
};