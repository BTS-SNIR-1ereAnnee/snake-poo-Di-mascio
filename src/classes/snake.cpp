#include "Point.h"
#include "snake.h"
#include "ncurses.h"
#include <iostream>

int x;
int y;

Snake::Snake() //Constructeur par default
{
	this->m_index = 0; //initialisation de m_index à 0 
}

void Snake::ajouterPoint(Point p) //insert un point dans le tableau snake
{
	this->serpent[m_index] = p; //insertion du point dans le tableau snake
	if(m_index <= 19)
		m_index++;
}	

void Snake::afficher() //affichage du serpent
{
	for (int i = 0; i <= m_index; i++) //Boucle permettant d'afficher tout le serpent
	{
		serpent[m_index-1].erasePoint();
		serpent[i].drawPoint();
	}
}

void Snake::left() //Fait tourner le serpent vers la gauche
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

void Snake::up() //Fait tourner le serpent vers le haut
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

void Snake::down() //Fait tourner le serpent vers le bas
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

void Snake::right() //Fait tourner le serpent vers la droite
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
