//
// Created by liuvaneshka on 05/07/22.
//
#include <iostream>
#include "Shellsort.h"
#include "constanes.h"
using namespace std;

int Shellsort::shellSort(int arr[], int n){
    // Start with a big gap, then reduce the gap
    cout << "Shellsort" << endl;
    for (int gap = n/2; gap > 0; gap /= 2){
        cout << "gap: " << gap << endl;
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted

        for (int i = gap; i < n; i += 1){
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct
            // location for a[i] is found
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){
                printArray(arr, n);
                arr[j] = arr[j - gap];

            }

            //  put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    return 0;
}

void Shellsort::printArray(int arr[], int n){
    for (int i=0; i<n; i++)
        cout << VIOLETA << arr[i] << " ";
    cout << endl;
}
void Shellsort::info(){
    cout << AZUL << "Caso promedio: O(n^5/4) ó O(n^3/2)\n"
                    "Peor caso: inserción sort-> O(n^2)" << endl;
    cout << "Divide a la mitad si el array es 10, la mitad 5" << endl;
    cout << "compara el elemento 0 con el 5 elemento" << endl;
}

void Shellsort::driver(){
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << NEGRO << "Array before sorting: \n";
    printArray(arr, n);

    shellSort(arr, n);

    cout << ROJO << "\nArray after sorting: \n";
    printArray(arr, n);
    info();
}