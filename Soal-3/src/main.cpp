#include "include/point.hpp"

#include <iostream>
using namespace std;

int main()
{
    
    double x, y;

    cout<<"Posisi Player :"<<endl;
    cout<<"x : "; cin >> x; cout<<"y : "; cin >> y;

    Point player(x, y);

    vector<Point> leaf;

    int n; cout<<"\nJumlah leaf : "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        double xTemp, yTemp;

        cout<<"\nleaf ke - "<<i+1<<endl;
        cout<<"x : ";cin >> xTemp; cout<<"y : ";cin >> yTemp;

        leaf.push_back(Point(xTemp, yTemp));
    }

    Point closest = player.closestTo(leaf);

    cout<<"\ntitik terdekat adalah "<<closest<<endl;

    return 0;

}