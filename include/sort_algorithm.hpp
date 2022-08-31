#pragma once
#include <iostream>

void bubble_sort(int *arr, int n);
void select_sort(int *arr, int n);

void merge_sort (int *arr, int start, int end, int *temp);
void merge_sort_main(int *arr, int n);
void mergeArray(int *arr, int low, int mid, int high, int *temp);