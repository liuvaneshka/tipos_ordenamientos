//
// Created by liuvaneshka on 04/07/22.
//

#ifndef SORT_SORT_H
#define SORT_SORT_H
#include <iostream>


using namespace std;

class Sort {
public:
    void driver();
    void swap(int *xp, int *yp);
    void selectionSort(int arr[], int n);
    void printArray(int arr[], int size);
    void info();
};



#endif //SORT_SORT_H
