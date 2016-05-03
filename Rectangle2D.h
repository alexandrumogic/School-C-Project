#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H
#include "Point2D.h"

class Rectangle2D
{
    public:
        Rectangle2D(Point2D a, Point2D b, Point2D c, Point2D d);
        virtual ~Rectangle2D();
        void draw();
    protected:
    private:
        Point2D *a, *b, *c, *d;
};

#endif // RECTANGLE2D_H
