#include "sort_algorithm.hpp"
#include "tools.hpp"

using namespace std;

void bubble_sort(int *arr, int n) {
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i=0;i<n-1;i++) {
            if (arr[i] > arr[i + 1]) {
                flag = true;
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
}

void select_sort(int *arr,int n){
    for (int i=0;i<n;i++){
        int min_idx = i;
        for (int j=i+1;j<n;j++){
            if (arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        int k = arr[i];  
        arr[i] = arr[min_idx];
        arr[min_idx] = k;
    }
}

void Solution::swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int Solution::partition(int *arr, int low, int hight) {
    int pivot = arr[hight];
    int i = low;

    for (int j = low; j <= hight - 1; ++j)  //注意这里的<=边界条件！
    {
        if (arr[j] < pivot) {

            swap(arr[i], arr[j]);
            ++i;
        }
    }
    swap(arr[i], arr[hight]);
    return i;
}

void Solution::quick_sort(int *arr, int low, int hight) {
    if (low < hight) {

        int q = partition(arr, low, hight);
        quick_sort(arr, low, q - 1);
        quick_sort(arr, q + 1, hight);
    }
}

void merge_sort(int *arr, int l, int r, int *tmp)
{
    if (l >= r) return;

    int mid = (l + r) >> 1;
    //
    merge_sort(arr, l, mid, tmp);
    merge_sort(arr, mid + 1, r, tmp);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
        if (arr[i] <= arr[j]) tmp[k ++ ] = arr[i ++ ];
        else tmp[k ++ ] = arr[j ++ ];

    while (i <= mid) tmp[k ++ ] = arr[i ++ ];
    while (j <= r) tmp[k ++ ] = arr[j ++ ];

    for (i = l, j = 0; i <= r; i ++, j ++ ) arr[i] = tmp[j];
}