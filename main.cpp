#include <iostream>
#include "EngineGlut.h"
#include "Point2D.h"
#include "Line2D.h"
#include "Triangle2D.h"
#include "Rectangle2D.h"
#include "Airplane.h"

using namespace std;

int main(int argc, char** argv)
{
    initEngineGlut(argc,argv);

    Airplane avion;

    avion.draw();

    cin.ignore();

    return 0;
}
