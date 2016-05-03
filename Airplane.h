#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "Line2D.h"
#include "Triangle2D.h"
#include "Rectangle2D.h"

class Airplane
{
    public:
        Airplane();
        virtual ~Airplane();
        void draw();
    protected:
    private:
        Triangle2D * triangles[10];
        Rectangle2D * rectangles[10];
        Line2D * lines[10];
        int nrTriangles, nrRectangles, nrLines;
};

#endif // AIRPLANE_H
