#pragma once
#include <iostream>
#include <cmath>

class Point {
private:
    double ordinate, abscissa;
public:
    Point();
    void Input();
    void Output();
    void translation(int x, int y);
    void Output1();
    float distance(Point a, Point b);
};
