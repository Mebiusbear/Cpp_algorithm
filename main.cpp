#include <iostream>
#include "tools.hpp"
#include "sort_algorithm.hpp"
#include <time.h>

using namespace std;



int main(){
    cout << "This is main!"
         << endl;
        
    int* arr;
    int size_arr = 30000;
    int max_num = 1000000;
    cout << "size of arr(num)      : "
         << size_arr << endl;
	
    arr = rand_from100_shape10(size_arr,max_num);
    cout << "origin_arr(array)     : ";
    // print_arr(arr,size_arr);
    

    clock_t start,end;//定义clock_t变量
    start = clock();//开始时间
    bubble_sort(arr,size_arr);
    cout << "bubble_sort_arr(array): ";
    // print_arr(arr,size_arr);
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）


    start = clock();//开始时间
    select_sort(arr,size_arr);;
    cout << "select_sort_arr(array): ";
    // print_arr(arr,size_arr);
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）


    start = clock();//开始时间
    merge_sort_main(arr,size_arr);
    cout << "merge_sort_arr(array) : ";
    // print_arr(arr,size_arr);
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）


}
