#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Point {
    double ordinate, abscissa;
public:
    void getPoint() {
        cin >> ordinate >> abscissa;
    }
    void displayPoint() {
        cout << "(" << ordinate << ", " << abscissa << ")" << endl;
    }
    friend class Triangle;
};

class Triangle {
    Point point1, point2, point3;
public:
    Triangle();
    void Input();
    void display();
    void translation(int tmp1, int tmp2);
    float distance(Point p1, Point p2);
    float perimeter();
    float area(float p);
    int checkPointInserted();
};