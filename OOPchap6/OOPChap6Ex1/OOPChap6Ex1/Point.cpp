#include "Point.h"

using namespace std;

Point::Point() {
    ordinate = abscissa = 0;
}
void Point::Input() {
    cout << "Insert point: ";
    cin >> ordinate >> abscissa;
}

void Point::Output() {
    cout << "Coordinates: (" << ordinate << ", " << abscissa << ")\n";
}
void Point::Output1() {
    cout << "(" << ordinate << ", " << abscissa << ") ";
}
void Point::translation(int x, int y) {
    ordinate += x;
    abscissa += y;
    cout << "Location changed: (" << ordinate << ", " << abscissa << ")\n";
}

float Point::distance(Point a, Point b) {
    return sqrt((a.ordinate - b.ordinate) * (a.ordinate - b.ordinate) + (a.abscissa - b.abscissa) * (a.abscissa - b.abscissa));
}