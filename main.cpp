#include <iostream>
#include "algo.hpp"

using namespace std;

int main()
{
    int arr[] = {1, 12, 33, 4, 8, 6, 7, 99, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: "<< endl;
    printArray(arr,size);

    //bubbleSort(arr,size);

    //insertionSort2(arr,size);

    selectionSort(arr, size);

    cout << "After sorting: "<< endl;
    printArray(arr,size);


    return 0;
}