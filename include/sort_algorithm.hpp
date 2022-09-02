#pragma once
#include <iostream>

void bubble_sort(int *arr, int n);
void select_sort(int *arr, int n);
void merge_sort(int *arr, int l, int r, int *tmp);

class Solution
{
public:
    void swap(int& a, int& b);
    int partition(int *arr, int low, int hight);
    void quick_sort(int *arr, int low, int hight);
};