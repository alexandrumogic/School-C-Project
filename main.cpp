#include <iostream>
#include "EngineGlut.h"
#include "Point2D.h"

using namespace std;

int main(int argc, char** argv)
{
    initEngineGlut(argc,argv);

    for (int i=-100;i<100;i++)
    {
        Point2D z(i, i*i/50);
        z.draw();
    }
    cin.ignore();

    return 0;
}
