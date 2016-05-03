#include "Rectangle2D.h"
#include "EngineGlut.h"
#include "Line2D.h"

Rectangle2D::Rectangle2D(Point2D a, Point2D b, Point2D c, Point2D d)
{
    this->a = new Point2D(a);
    this->b = new Point2D(b);
    this->c = new Point2D(c);
    this->d = new Point2D(d);
}

Rectangle2D::~Rectangle2D()
{
    delete this->a;
    delete this->b;
    delete this->c;
    delete this->d;
}

void Rectangle2D::draw()
{
    EngineGlut engine;

    Line2D l1(*(this->a), *(this->b));
    l1.draw();
    Line2D l2(*(this->b), *(this->c));
    l2.draw();
    Line2D l3(*(this->c), *(this->d));
    l3.draw();
    Line2D l4(*(this->d), *(this->a));
    l4.draw();

}
