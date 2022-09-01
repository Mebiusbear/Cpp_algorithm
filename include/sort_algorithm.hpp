#pragma once
#include <iostream>

void bubble_sort(int *arr, int n);
void select_sort(int *arr, int n);

void merge_sort (int *arr, int start, int end, int *temp);
void mergeArray(int *arr, int low, int mid, int high, int *temp);

class Solution
{
public:
    void swap(int& a, int& b);
    int partition(int *arr, int low, int hight);
    void quick_sort(int *arr, int low, int hight);
};