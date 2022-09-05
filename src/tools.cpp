#include "tools.hpp"

using namespace std;

int* rand_fromsize_shapemax_num(int size, int max_num)
{
	int *res=new int[size];
    double random(double,double);
    srand(unsigned(time(0)));

    for (int i=0;i<size;i++)
    {
        res[i] = int(random(0,max_num));
    }
	return res;
}

double random(double start, double end)
{
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}


void print_arr(int *arr,int n)
{
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
