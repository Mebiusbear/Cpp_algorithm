#include "circle.hpp"

int Circle::setcenter(Point o){
    center = o;
    return 1;
}

int Circle::setr(int mr){
    r = mr;
    return 1;
}

double Circle::print_area(){
    return M_PI * r * r;
}