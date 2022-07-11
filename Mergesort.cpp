//
// Created by liuvaneshka on 05/07/22.
//

#include "Mergesort.h"
#include <iostream>
using namespace std;


void Mergesort::merge(int array[], int const left, int const mid, int const right){
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
            *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne = 0, // Initial index of first sub-array
    indexOfSubArrayTwo = 0; // Initial index of second sub-array
    int indexOfMergedArray = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void Mergesort::mergeSort(int array[], int const begin, int const end){
    if (begin >= end)
        return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


void Mergesort::printArray(int A[], int size){
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}
void Mergesort::driver(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, (int)arr_size);

    mergeSort(arr, 0, (int)arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, (int)arr_size);
    info();
}

void Mergesort::info(){
    cout << AZUL<< "Complejidad del Merge: O(n)\n"
                   "Complejidad del sort: O(log(n))\n"
                   "Mejor y peor caso: O(n*log(n))\n" << endl;
    cout << " ESTABLE not in place "
            "\n Consiste en ir dividiendo a la moitad la lista o el arreglo \n"
            "prdenar cada lista recursivamente, y al final mezclar las dos sublistas\n"
            "\n En principio una lista pequena necesita menos pasos para ordenarse que una lista grande \n"
            "se necesitan menos pasos para construir una lista ordenada a partir de dos listas ordenadas\n"
            "\n ESPACIO AUX O(n) ES ESTABLE, mejor para listas, pasa por todo el proceso aun asi el arreglo este ordenado \n" << endl;
}