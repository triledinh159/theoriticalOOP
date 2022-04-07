#include "TKS.h"

Triangle::Triangle() {
    point1.ordinate = point1.abscissa = 0;
    point2.ordinate = point2.abscissa = 0;
    point3.ordinate = point3.abscissa = 0;
}

void Triangle::Input() {
    cout << "Point 1: "; point1.getPoint();
    cout << "Point 2: "; point2.getPoint();
    cout << "Point 3: "; point3.getPoint();
}

void Triangle::display() {
    cout << "Location of the triangle's points:\n";
    cout << "Point 1: "; point1.displayPoint();
    cout << "Point 2: "; point2.displayPoint();
    cout << "Point 3: "; point3.displayPoint();
}

void Triangle::translation(int tmp1, int tmp2) {
    point1.ordinate += tmp1; point1.abscissa += tmp2;
    point2.ordinate += tmp1; point2.abscissa += tmp2;
    point3.ordinate += tmp1; point3.abscissa += tmp2;
    cout <<'\n';
    display();
}

float Triangle::distance(Point p1, Point p2) {
    return sqrt((p1.ordinate - p2.ordinate) * (p1.ordinate - p2.ordinate) + (p1.abscissa - p2.abscissa) * (p1.abscissa - p2.abscissa));
}

float Triangle::perimeter() {
    return distance(point1, point2) + distance(point1, point3) + distance(point2, point3);
}

float Triangle::area(float p) {
    return sqrt(p * (p - distance(point1, point2)) * (p - distance(point1, point3)) * (p - distance(point2, point3)));
}
int Triangle::checkPointInserted() {
    if (point1.ordinate < 0 || point1.abscissa < 0 || point2.ordinate < 0 || point2.abscissa < 0 || point3.ordinate < 0 || point3.abscissa < 0)
        return 1;
    return 0;
}