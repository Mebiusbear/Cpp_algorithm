#pragma once

# include <iostream>
# include "point.hpp"
# include <math.h>
using namespace std;

class Circle{
private:
    Point center;
    int r;
public:
    int setr(int mr);
    int setcenter(Point o);
    double print_area();
};