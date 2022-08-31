#include "tools.hpp"

using namespace std;

int* rand_from100_shape10(int n)
{
	int *res=new int[n];
    double random(double,double);
    srand(unsigned(time(0)));

    for (int i=0;i<n;i++)
    {
        res[i] = int(random(0,100));
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
