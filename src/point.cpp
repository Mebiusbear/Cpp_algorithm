# include "point.hpp"

int Point::setx(int mx){
    x = mx;
    return 0;
}
int Point::sety(int my){
    y = my;
    return 0;
}int Point::getx(){
    return x;
}
int Point::gety(){
    return y;
}
void Point::print_XY(){
    cout << "(" << x << "," << y << ")" << endl;
}
double Point::distance(Point other){
    int d_x = x - other.getx();
    int d_y = y - other.gety();
    double d = d_x*d_x + d_y*d_y;
    return sqrt(d);
}