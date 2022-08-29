#include <iostream>
#include "first.hpp"
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
    for (int i=0;i<=size_arr;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bubble_sort(arr,size_arr);

    cout << "after_sort_arr: " << " ";
    for (int i=0;i<=size_arr;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
