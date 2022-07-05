//
// Created by liuvaneshka on 05/07/22.
//

#ifndef SORT_MERGESORT_H
#define SORT_MERGESORT_H
#include <iostream>
#include "constanes.h"
using namespace std;

class Mergesort {

public:

    // Merges two subarrays of array[].
    // First subarray is arr[begin..mid]
    // Second subarray is arr[mid+1..end]
    void merge(int array[], int const left, int const mid, int const right);

    // begin is for left index and end is
    // right index of the sub-array
    // of arr to be sorted */
    void mergeSort(int array[], int const begin, int const end);

    // UTILITY FUNCTIONS
    // Function to print an array
    void printArray(int A[], int size);

    void driver();

    void info();
};


#endif //SORT_MERGESORT_H
