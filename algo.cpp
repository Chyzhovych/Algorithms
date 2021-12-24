#include "algo.hpp"
#include <iostream>

/* Bubble Sort
Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
Auxiliary Space: O(1)
*/

void bubbleSort(int *arr, int arr_size)
{
    bool swapped = false;

    for (int i = 0; i < arr_size - 1; i++)
    {
        for (int j = 0; j < arr_size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
    }
}

/* Insertion Sort
Time Complexity: O(n^2) 
Auxiliary Space: O(1)
Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. 
And it takes minimum time (Order of n) when elements are already sorted.
*/

void insertionSort(int *arr, int arr_size)
{
    int key = 0;
    for(int i = 1; i < arr_size; i++)
    {
        key = arr[i];
        int j = i - 1;

        while(j >=0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

// This function uses a loop for() instead of while()

void insertionSort2(int *arr, int arr_size)
{
    int key = 0;
    for(int i = 1; i < arr_size; i++)
    {
        key = arr[i];
        int j = i -1;

        for(; j >= 0 && arr[j] > key; --j)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

void swap(int *val, int *val2)
{
    int temp = *val;
    *val = *val2;
    *val2 = temp; 
}

void printArray(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}