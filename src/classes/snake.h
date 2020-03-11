#include "Point.h"
#include <ncurses.h>

class Snake
{

	private:

		Point serpent[20];
		int m_index;
		char m_direction;

	public:

		Snake();

		void ajouterPoint(Point p);
		void afficher();
		void up();
		void down();
		void right();
		void left();
};