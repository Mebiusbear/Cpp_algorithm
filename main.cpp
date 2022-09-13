# include <iostream>
# include "test_1.hpp"
# include "test_2.hpp"


using namespace std;

// int main(){
//     int steps = 50;
//     feibo_1(steps);
//     cout << feibo_2(steps) << endl;
// }

int main(){
    struct struct_1 a,b;
    struct struct_1 *c = &a;
    c->num = 5;
    c->str = 'a';
    cout << a.num << endl;
    c = &b;
    cout << b.num << endl;
    c->num = 2;
    cout << a.num << endl;
    cout << b.num << endl;

}