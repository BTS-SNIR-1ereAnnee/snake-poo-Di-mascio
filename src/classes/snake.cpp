#include "Point.h"
#include "snake.h"
#include "ncurses.h"
#include <iostream>

int x;
int y;

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
	for (int i = 0; i <= m_index; i++)
	{
		serpent[m_index-1].erasePoint();
		serpent[i].drawPoint();
	}
}

void Snake::left()
{
	x = serpent[0].getX();
	y =	serpent[0].getY();
	serpent[0].moveLeft();
	for(int i=1; i < m_index; i++)
	{
		serpent[i].setX(x);
		x++;
	}
}

void Snake::up()
{
	x = serpent[0].getX();
	y =	serpent[0].getY();
	serpent[0].moveUp();
	for(int i = 1; i < m_index; i++)
	{
		serpent[i].setX(x);
		serpent[i].setY(y);
		x++;
	}
}

void Snake::down()
{
	x = serpent[0].getX();
	y =	serpent[0].getY();
	serpent[0].moveDown();
	for(int i = 1; i < m_index; i++)
	{
		serpent[i].setX(x);
		serpent[i].setY(y);
		x--;
	}
}

void Snake::right()
{
	x = serpent[0].getX();
	y =	serpent[0].getY();
	serpent[0].moveRight();
	for(int i=1; i < m_index; i++)
	{
		serpent[i].setX(x);
		serpent[i].setY(y);
		x--;
	}
}