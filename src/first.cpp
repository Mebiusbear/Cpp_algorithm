#include "first.hpp"

using namespace std;

int* rand_from100_shape10()
{
	int *res=new int[10];

    for (int i=0;i<10;i++)
    {
        int a = rand()%100;
        res[i] = a;
    }
	return res;
}

