//
// Created by liuvaneshka on 04/07/22.
//
#include "constanes.h"
#include "Sort.h"

void Sort::swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Sort::selectionSort(int arr[], int n){
    int i, j, min_idx;
    cout << "original:  " << endl;
    printArray(arr, n);
    // One by one move boundary of
    // unsorted subarray
    cout << " sorteo " << endl;
    for (i = 0; i < n-1; i++){

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        printArray(arr, n);
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);

    }
    cout << endl;
}

//Function to print an array
void Sort::printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void Sort::info(){
    cout << AZUL << "Es un algoritmo simple de ordenamiento, ES SIMPLE, es eficiente para peuqenos sets de datos" << endl;
    cout << "Se trabaja de Izq a derecha, examinanando cada Item y comparandolo con los de su izq\n"
            "Es mas eficiente en la practica q otros algoritmos cuadraticos  (bubble sort) \n"
            "ES ESTABLE, algoritmo de tipo IN PLACE (o sea no necesiar memoria aux)\n"
            "ONLINE o sea que pocesas pieza por pieza en serie en el ordne q entra, sin necesitar todo el input" << endl;
    cout << AZUL << "O(n^2) en el peor de sus  casos para comparacion y swap" << endl;
    cout << AZUL << "O(n) mejor caso,mya no se rwalizan intercambios YA ESTA ORDENADO \n"
                    "solo se realizan comparaciones\n"
                    "" << endl;
}
void Sort::driver(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    info();
}