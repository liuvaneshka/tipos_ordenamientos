//
// Created by liuvaneshka on 05/07/22.
//
#include <iostream>
#include "Heapsort.h"
using namespace std;

void Heapsort::heapify(int arr[], int n, int i){
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void Heapsort::heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void Heapsort::printArray(int arr[], int n){
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

void Heapsort::info(){
    cout << AZUL << "Hacer heap de max: O(n)\n"
                    "Actualizar heap de max: O(log(n))\n"
                    "Caso promedio: O(n.log(n))" << endl;
}

void Heapsort::driver(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Arreglo original \n";
    printArray(arr, n);
    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
    info();
}