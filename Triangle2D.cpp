#include "Triangle2D.h"
#include "EngineGlut.h"
#include "Line2D.h"

Triangle2D::Triangle2D(Point2D a, Point2D b, Point2D c, bool drawFull)
{
    this->a = new Point2D(a);
    this->b = new Point2D(b);
    this->c = new Point2D(c);

    this->drawFull = drawFull;
}

Triangle2D::~Triangle2D()
{
    delete this->a;
    delete this->b;
    delete this->c;
}

void Triangle2D::draw()
{
    EngineGlut engine;
    Line2D e1(*(this->a), *(this->b));
    e1.draw();
    Line2D e2(*(this->a), *(this->c));
    e2.draw();
    Line2D e3(*(this->b), *(this->c));
    e3.draw();

    if (drawFull == true) engine.drawSurface(this->a->getX(), this->a->getY(), this->b->getX(), this->b->getY(), this->c->getX(), this->c->getY());
}
