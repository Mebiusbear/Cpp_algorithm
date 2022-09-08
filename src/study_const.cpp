# include "study_const.hpp"

using namespace std;

void test_1(){
    int num=0;
    int * const ptr=&num; //const指针必须初始化！且const指针的值不能修改
    int * t = &num;
    *t = 3;
    cout<<*ptr<<endl;
}

void test_2(){
    const int num=0;
    int const * ptr=&num;
    cout<<*ptr<<endl;
}

void test_3(){
    const int p = 3;
    int const * ptr = &p;
}

void test_4(int output,const int input){
    cout << output << endl;
    output = input * 2;
    cout << output << endl;
}

void test_6(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void test_5(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

Apple::Apple(int i):apple_number(i)
{

}
void Apple::take(int num) const
{
    cout<<"take func "<<num<<endl;
}
int Apple::getCount() const
{
    take(1);
    return apple_number;
}




