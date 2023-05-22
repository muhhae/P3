#include "include/point.hpp"
#include "cmath"

#include <iostream>

Point::Point(double x, double y){
    setX(x); setY(y);
}

double Point::distanceTo(Point p)
{
    //std::cout<<"Jarak : "<<(sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY())))<<std::endl;
    //std::cout<<"jarak : "<<p<<std::endl;
    return sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY()));
}

Point Point::closestTo(std::vector<Point> points){

    Point closest = points[0];

    for (int i = 0; i < points.size(); i++)
    {
        //std::cout<<points[i].getX()<<" "<<points[i].getY()<<"\n"<<std::endl;

        if (distanceTo(points[i]) < distanceTo(closest))
        {
            //std::cout<<points[i].getX()<<" "<<points[i].getY()<<std::endl;
            closest = Point(points[i]);
        }
    }

    //std::cout<<closest.getX()<<" "<<closest.getY()<<std::endl;
    return closest;
}

double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

std::ostream& operator<<(std::ostream& out, const Point& P)
{
    out<<"("<<P.x<<", "<<P.y<<")";
    return out;
}