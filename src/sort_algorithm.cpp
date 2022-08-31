#include "sort_algorithm.hpp"

void bubble_sort(int *a, int n) {
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i=0;i<n-1;i++) {
            if (a[i] > a[i + 1]) {
                flag = true;
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
}

void select_sort(int *a,int n){
    for (int i=0;i<n;i++){
        int min_idx = i;
        for (int j=i+1;j<n;j++){
            if (a[min_idx] > a[j]){
                min_idx = j;
            }
        }
        int k = a[i];  
        a[i] = a[min_idx];
        a[min_idx] = k;
    }
}