#include <iostream>
#include "tools.hpp"
#include "sort_algorithm.hpp"

using namespace std;



int main(){
    cout << "This is main!"
         << endl;
        
    int* arr;
    int size_arr = 17;
    cout << "size of arr(num)      : "
         << size_arr << endl;
	
    
    arr = rand_from100_shape10(size_arr);
    cout << "origin_arr(array)     : ";
    print_arr(arr,size_arr);

    bubble_sort(arr,size_arr);
    cout << "bubble_sort_arr(array): ";
    print_arr(arr,size_arr);
    select_sort(arr,size_arr);
    cout << "select_sort_arr(array): ";
    print_arr(arr,size_arr);

}
