#ifndef POINT2D_H
#define POINT2D_H


class Point2D
{
    public:
        Point2D();
        Point2D(double x, double y);
        virtual ~Point2D();
        void draw();
        static int getCount();
    protected:
    private:
        double x, y;
        static int counter;
};

#endif // POINT2D_H
