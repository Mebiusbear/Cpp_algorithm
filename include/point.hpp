#pragma once
# include <iostream>
# include <math.h>

using namespace std; 

class Point{
private:
    int x;
    int y;
public:
    int setx(int mx);
    int sety(int my);
    int getx();
    int gety();
    void print_XY();
    double distance(Point other);
};

