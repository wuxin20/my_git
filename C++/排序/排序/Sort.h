#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <malloc.h>


void InsertSort(int* array, int size);
void ShellSort(int* array, int size);
void SelectSort(int* array, int size);
void SelectSortOP(int* array, int size);


void QuickSort(int* array, int left, int right);
void QuickSortNor(int* array, int size);
void MergrData(int* array, int left, int mid, int right);
void _MergrData(int* array, int left, int right, int temp);
void MergeSort(int* array, int size);
void MergeSortNor(int* array, int size);


void CountSort(int* array, int size);