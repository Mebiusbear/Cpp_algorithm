#include "sort_algorithm.hpp"

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



void mergeArray(int *arr, int low, int mid, int high, int *temp)
{
    int i = low;
    int j = mid + 1;
    int count = 0;
 
    while((i <= mid) && (j <= high))
    {
        if(arr[i] < arr[j])
            temp[count++] = arr[i++];
        else
            temp[count++] = arr[j++];
    }
 
    while(i<=mid)
        temp[count++] = arr[i++];
 
    while(j<=high)
        temp[count++] = arr[j++];
 
    for(int i = 0; i < count; i++)
        arr[low + i] = temp[i];
}

void merge_sort (int *arr, int start, int end, int *temp){
    if (start >= end){
        return ;
    }
    int mid = (start+end) / 2;

    merge_sort(arr,start,mid,temp);
    merge_sort(arr,mid+1,end,temp);
    mergeArray(arr, start, mid, end, temp);
}

void merge_sort_main(int *arr, int n){
    int mid = (0+n) / 2;
    int *temp = new int[n];
    merge_sort(arr,0,mid,temp);

}
