#include <iostream>
#include "tools.hpp"
#include "sort_algorithm.hpp"
#include <time.h>

using namespace std;


void test_main(int size_arr, int max_num){
    clock_t start,end;//定义clock_t变量

    cout << "This is test main!"
         << endl;
        
    int* arr;
    cout << "size of arr(num)      : "
         << size_arr << endl;
	
    arr = rand_from100_shape10(size_arr,max_num);
    cout << "origin_arr(array)     : ";
    print_arr(arr,size_arr);
    
    arr = rand_from100_shape10(size_arr,max_num);
    bubble_sort(arr,size_arr);
    cout << "bubble_sort_arr(array): ";
    print_arr(arr,size_arr);

    arr = rand_from100_shape10(size_arr,max_num);
    select_sort(arr,size_arr);;
    cout << "select_sort_arr(array): ";
    print_arr(arr,size_arr);

    arr = rand_from100_shape10(size_arr,max_num);
    int *temp = new int[size_arr];
    merge_sort(arr,0,size_arr-1,temp);
    cout << "merge_sort_arr(array) : ";
    print_arr(arr,size_arr);

    arr = rand_from100_shape10(size_arr,max_num);
    Solution so;
    so.quick_sort(arr,0,size_arr-1);
    cout << "quick_sort_arr(array) : ";
    print_arr(arr,size_arr);


}

void runtime_main(int size_arr, int max_num){
    clock_t start,end;//定义clock_t变量

    cout << "This is runtime main!"
         << endl;
        
    int* arr;

    cout << "size of arr(num)      : "
         << size_arr << endl;
	
    arr = rand_from100_shape10(size_arr,max_num);
    start = clock();//开始时间
    bubble_sort(arr,size_arr);
    cout << "bubble_sort_arr(array): ";
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）

    arr = rand_from100_shape10(size_arr,max_num);    
    start = clock();//开始时间
    select_sort(arr,size_arr);;
    cout << "select_sort_arr(array): ";
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）

    arr = rand_from100_shape10(size_arr,max_num);
    start = clock();//开始时间
    // merge_sort_main(arr,size_arr);
    int *temp = new int[size_arr];
    merge_sort(arr,0,size_arr-1,temp);
    cout << "merge_sort_arr(array) : ";
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）

    arr = rand_from100_shape10(size_arr,max_num);
    Solution so;
    start = clock();//开始时间
    so.quick_sort(arr,0,size_arr-1);
    cout << "quick_sort_arr(array) : ";
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）


}


int main(){

    runtime_main(30000,1000000); // use (30000,1000000)
    test_main(20,100); // use (20,100)

}
