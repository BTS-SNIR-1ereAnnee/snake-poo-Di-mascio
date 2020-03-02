#include "Point.h"
#include "Board.h"
#include <iostream>


using namespace std;

Point::Point()
{
    m_x = m_y = 10; //affectation d'une valeur à m_x et m_y
}

Point::Point(int x, int y)
{
    this->m_x = x; // m_x prend la valeur de x
    this->m_y = y; // m_y prend la valeur de y 
}

void Point::setPoint(int x, int y)
{
    this->m_x = x; // m_x prend la valeur de x
    this->m_y = y; // m_y prend la valeur de y
}

void Point::moveDown()
{
    m_y++; //Incrémentation de y
}

void Point::moveUp()
{
    m_y--; //Incrémentation de y
}

void Point::moveRight()
{
    m_x++; //Incrémentation de X
}

void Point::moveLeft()
{
    m_x--; //Incrémentation de X
}

int Point::getX() const
{
    return m_x; //Retourne la valeur de x
}


void Point::setX(int val)
{
    m_x = val;  //x prend la valeur de val
}

int Point::getY() const
{
    return m_y; //Retourne la valeur de y
}

void Point::setY(int val)
{
    m_y = val; //y prend la valeur de val
}


void Point::drawPoint()
{
    Board *b; //Creation d'un objet avec pointeur
    b = Board::getInstance(); //Utilisation du singleton
    b->dessinerPoint(*this); //Dessine le point
}

void Point::erasePoint()
{
    Board *b;//Creation d'un objet avec pointeur
    b = Board::getInstance();//Utilisation du singleton
    b->effacerPoint(*this); //Efface le point
}

void Point::debug()
{
    //Permet de connaitre les coordonées
    cout << "(" << this->m_x << "," << this->m_y << ")";
}

Point::~Point()
{
    //dtor (destructeur)
}
