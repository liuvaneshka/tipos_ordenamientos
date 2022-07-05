//
// Created by liuvaneshka on 05/07/22.
//

#ifndef SORT_HEAPSORT_H
#define SORT_HEAPSORT_H
#include "constanes.h"


class Heapsort {
public:
    void heapify(int arr[], int n, int i);

    // main function to do heap sort
    void heapSort(int arr[], int n);

    /* A utility function to print array of size n */
    void printArray(int arr[], int n);

    void info();

    void driver();
};


#endif //SORT_HEAPSORT_H
