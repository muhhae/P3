#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <vector>

class Point{
    private:
        double x, y;
    public:
        Point(){}
        Point(double x, double y);
        double distanceTo(Point p);
        Point closestTo(std::vector<Point> points);
        double getX();
        double getY();
        void setY(double y);
        void setX(double x);
        friend std::ostream& operator<<(std::ostream& out, const Point& P);
};


#endif