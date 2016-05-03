#include "Airplane.h"

Airplane::Airplane()
{
    // default
    nrTriangles = 0;
    nrRectangles = 0;
    nrLines = 0;

    // corpul principal
    Point2D a(-30,150);
    Point2D b(30, 150);
    Point2D c(30, -150);
    Point2D d(-30, -150);
    rectangles[0] = new Rectangle2D(a,b,c,d);
    nrRectangles++;

    // cap
    Point2D e(0, 200);
    triangles[0] = new Triangle2D(a,b,e,true);
    nrTriangles++;

    // aripa stanga
    Point2D s1(-30, 90);
    Point2D s2(-30, -20);
    Point2D s3(-100, -85);
    triangles[1] = new Triangle2D(s1,s2,s3,true);
    nrTriangles++;

    // aripa dreapta
    Point2D d1(30, 90);
    Point2D d2(30, -20);
    Point2D d3(100, -85);
    triangles[2] = new Triangle2D(d1,d2,d3,true);
    nrTriangles++;

    // coada
    Point2D z(0, -240);
    triangles[3] = new Triangle2D(c,d,z,false);
    nrTriangles++;

    // coada-aripa stanga
    Point2D cs1(-20, -170);
    Point2D cs2(-5, - 210);
    Point2D cs3(-50, -240);
    triangles[4] = new Triangle2D(cs1,cs2,cs3,true);
    nrTriangles++;

    // coada-aripa dreapta
    Point2D cd1(20, -170);
    Point2D cd2(5, -210);
    Point2D cd3(50, -240);
    triangles[5] = new Triangle2D(cd1,cd2,cd3,true);
    nrTriangles++;

    // detalii coada
    Point2D det1(0, -150);
    Point2D det2(0, -240);
    lines[0] = new Line2D(det1,det2);
    nrLines++;

    // detalii coada-aripa stanga
    Point2D dts1(-70, 55);
    Point2D dts2(-50, 55);
    Point2D dts3(-50, -10);
    Point2D dts4(-70, -10);
    rectangles[1] = new Rectangle2D(dts1,dts2,dts3,dts4);
    nrRectangles++;

    // detalii coada-aripa dreapta
    Point2D dtd1(70, 55);
    Point2D dtd2(50, 55);
    Point2D dtd3(50, -10);
    Point2D dtd4(70, -10);
    rectangles[2] = new Rectangle2D(dtd1,dtd2,dtd3,dtd4);
    nrRectangles++;

    // detalii corp
    Point2D dtc1(-15, 130);
    Point2D dtc2(15, 130);
    Point2D dtc3(-15, -130);
    Point2D dtc4(15, -130);
    rectangles[3] = new Rectangle2D(dtc1, dtc2, dtc3, dtc4);
    nrRectangles++;
}

Airplane::~Airplane()
{
    //dtor
}

void Airplane::draw()
{
    for(int i=0;i<nrTriangles;i++)
        triangles[i]->draw();

    for(int i=0;i<nrRectangles;i++)
        rectangles[i]->draw();

    for(int i=0;i<nrLines;i++)
        lines[i]->draw();
}
