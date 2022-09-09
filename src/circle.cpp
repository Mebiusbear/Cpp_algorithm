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

void Circle::incircle(Point a){
    double dis = center.distance(a);
    double delta = dis - r;
    if (delta < 0){
        cout << "Point in circle" << endl;
    }
    else if (delta == 0){
        cout << "Point on circle" << endl;
    }
    else if (delta > 0){
        cout << "Point out circle" << endl;
    }
}