#include <iostream>
#include <cmath>
#include "fimext.h"
using namespace std;
struct Point
{
    double x;
    double y;
};
struct Segment
{
    double length(Point p1 = {0,0}, Point p2 = {0,0})
    {
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        return sqrt(dx * dx + dy * dy);
    }
};
int main() {
    double x,y;
    cin >> x >> y;
    Point point0 = {x,y};
    cin >> x >> y;
    Point point1 = {x,y};
        Segment s;
        cout << s.length(point0,point1);
    return 0;
}