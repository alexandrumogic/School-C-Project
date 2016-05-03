#include "Line2D.h"
#include "EngineGlut.h"

Line2D::Line2D(Point2D a, Point2D b)
{
    this->a = new Point2D(a);
    this->b = new Point2D(b);
}

Line2D::~Line2D()
{
    delete this->a;
    delete this->b;
}

void Line2D::draw()
{
    EngineGlut engine;
    engine.drawLine(this->a->getX(),this->a->getY(),this->b->getX(), this->b->getY());
}
