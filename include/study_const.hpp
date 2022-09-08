# include <iostream>

void test_1();
void test_2();
void test_4(int output,const int input);
void test_5(int &a, int &b);
void test_6(int *a, int *b);

class Apple{
private:
    int people[100];
public:
    Apple(int i); 
    const int apple_number=10;
    void take(int num) const;
    int getCount() const;
};

