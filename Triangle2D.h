#ifndef TRIANGLE2D_H
#define TRIANGLE2D_H
#include "Point2D.h"

class Triangle2D
{
    public:
        Triangle2D(Point2D a, Point2D b, Point2D c, bool drawFull);
        ~Triangle2D();
        void draw();
    protected:
    private:
        Point2D *a, *b, *c;
        bool drawFull;
};

#endif // TRIANGLE2D_H
