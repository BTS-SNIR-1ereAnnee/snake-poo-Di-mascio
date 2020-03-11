#include "Point.h"
#include "snake.h"
#include "ncurses.h"
#include <iostream>

Snake::Snake()
{
	this->m_index = 0;
}

void Snake::ajouterPoint(Point p)
{
	this->serpent[m_index] = p;
	if(m_index <= 19)
		m_index++;
}	

void Snake::afficher()
{
	for (int i = 0; i < m_index; ++i)
	{
		serpent[i].drawPoint();
	}
}

void Snake::deplacerPoint()
{
	for (int i = 0; i < m_index; ++i)
	{
		serpent[i].moveUp();
	}

for (int i = 0; i < m_index; ++i)
	{
		serpent[i].moveDown();
	}

}