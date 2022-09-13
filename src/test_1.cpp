# include "test_1.hpp"

void feibo_1(int steps){
    double a = 0;
    double b = 1;
    double res = 0;
    for (int i=0;i<steps;i++) {
        res = a+b;
        b = a;
        a = res;
    }
    cout << res << endl;
}

double feibo_2(int steps){
    if (steps == 1 or steps == 2){
        return 1;
    }
    else {
        return feibo_2(steps-1) + feibo_2(steps-2);
    }
}