//
// Created by liuvaneshka on 05/07/22.
//

#ifndef SORT_QUICKSORT_H
#define SORT_QUICKSORT_H
#include "constanes.h"

class Quicksort {
public:
    int partition(int arr[], int low, int high);

    void quickSort(int arr[], int low, int high);

    void printArray(int arr[], int size);

    void driver();

    void info();

};


#endif //SORT_QUICKSORT_H
