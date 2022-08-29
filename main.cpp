#include <iostream>
#include "tools.hpp"
#include "sort_algorithm.hpp"

using namespace std;

int main(){
    cout << "This is main!"
         << endl;
    
    int* arr;
	arr = rand_from100_shape10();
    int size_arr = sizeof(arr);
    cout << "size of arr: "
         << size_arr << endl;

    cout << "arr: " << " ";
    print_arr(arr);

    bubble_sort(arr,size_arr);
    cout << "after_sort_arr: " << " ";
    print_arr(arr);

}
