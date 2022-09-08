#include <iostream>
#include "point.hpp"
#include "circle.hpp"
#include "tools.hpp"
#include "sort_algorithm.hpp"
#include "stuck_algorithm.hpp"
#include "study_const.hpp"
#include <time.h>

using namespace std;


void test_main(int size_arr, int max_num){
    clock_t start,end;//定义clock_t变量

    cout << "This is test main!"
         << endl;
        
    int* arr;
    cout << "size of arr(num)      : "
         << size_arr << endl;
	
    arr = rand_fromsize_shapemax_num(size_arr,max_num);
    cout << "origin_arr(array)     : ";
    print_arr(arr,size_arr);
    
    arr = rand_fromsize_shapemax_num(size_arr,max_num);
    bubble_sort(arr,size_arr);
    cout << "bubble_sort_arr(array): ";
    print_arr(arr,size_arr);

    arr = rand_fromsize_shapemax_num(size_arr,max_num);
    select_sort(arr,size_arr);;
    cout << "select_sort_arr(array): ";
    print_arr(arr,size_arr);

    arr = rand_fromsize_shapemax_num(size_arr,max_num);
    int *temp = new int[size_arr];
    merge_sort(arr,0,size_arr-1,temp);
    cout << "merge_sort_arr(array) : ";
    print_arr(arr,size_arr);

    arr = rand_fromsize_shapemax_num(size_arr,max_num);
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
	
//     arr = rand_fromsize_shapemax_num(size_arr,max_num);
//     start = clock();//开始时间
//     bubble_sort(arr,size_arr);
//     cout << "bubble_sort_arr(array): ";
//     end = clock();   //结束时间
//     cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）

    arr = rand_fromsize_shapemax_num(size_arr,max_num);    
    start = clock();//开始时间
    select_sort(arr,size_arr);;
    cout << "select_sort_arr(array): ";
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）

    arr = rand_fromsize_shapemax_num(size_arr,max_num);
    start = clock();//开始时间
    // merge_sort_main(arr,size_arr);
    int *tmp = new int[size_arr];
    merge_sort(arr,0,size_arr-1,tmp);
    cout << "merge_sort_arr(array) : ";
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）

    arr = rand_fromsize_shapemax_num(size_arr,max_num);
    Solution so;
    start = clock();//开始时间
    so.quick_sort(arr,0,size_arr-1);
    cout << "quick_sort_arr(array) : ";
    end = clock();   //结束时间
    cout<<"time = "<<double(end-start)/CLOCKS_PER_SEC<<"s"<<endl;  //输出时间（单位：ｓ）
}

void test_stuct(int *arr, int size_arr){

    
	ListNode* head = new ListNode(arr[0]);
	ListNode* p = head;
	//利用尾插法创建一个链表
    int count = 0;
	while (count++ < size_arr-1){
		ListNode* q = new ListNode(arr[count]);
		p->next = q; 
		p = p->next;
	}

	//遍历这个链表，并输出每个结点的元素
	ListNode* m = head;
	while (m != nullptr){
		cout << m->val << endl;
		m = m->next;
	}

}

int main(){

    // runtime_main(60000,1000000); // use (30000,1000000)
    // test_main(20,100); // use (20,100)

    // int *arr = rand_fromsize_shapemax_num(10,200);
    // test_stuct(arr,10);

    // Apple a(2);
    // cout<<a.getCount()<<endl;

    Point a;
    Point b;
    a.setx(1);
    a.sety(4);
    b.setx(3);
    b.sety(3);
    cout << "a_point : ";
    a.print_XY();
    cout << "b_point : ";
    b.print_XY();
    double dis = a.distance(b);
    cout << dis << endl;
    Circle o;
    o.setr(2);
    o.setcenter(a);
    double area = o.print_area();
    cout << area << endl;
}
