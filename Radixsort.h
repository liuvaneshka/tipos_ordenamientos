//
// Created by liuvaneshka on 05/07/22.
//

#ifndef SORT_RADIXSORT_H
#define SORT_RADIXSORT_H


class Radixsort {
public:
    // A utility function to get maximum value in arr[]
    int getMax(int arr[], int n);

    // A function to do counting sort of arr[] according to
    // the digit represented by exp.
    void countSort(int arr[], int n, int exp);

    // The main function to that sorts arr[] of size n using
    // Radix Sort
    void radixsort(int arr[], int n);

    // A utility function to print an array
    void print(int arr[], int n);

    void driver();

    void info();
};


#endif //SORT_RADIXSORT_H
