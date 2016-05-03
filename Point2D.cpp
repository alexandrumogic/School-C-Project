#include "Point2D.h"
#include "EngineGlut.h"
#include <iostream>

int Point2D::counter = 0;

Point2D::Point2D()
{
    this->x=0;
    this->y=0;
    counter++;
}

Point2D::Point2D(double x, double y)
{
    this->x=x;
    this->y=y;
    counter++;
}

Point2D::~Point2D()
{
    counter--;
}

void Point2D::draw(){
    EngineGlut engine;
    engine.drawPoint(this->x,this->y);
}

int Point2D::getCount()
{
    return counter;
}

double Point2D::getX()
{
    return x;
}

double Point2D::getY()
{
    return y;
}
