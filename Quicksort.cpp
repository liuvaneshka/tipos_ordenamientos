//
// Created by liuvaneshka on 05/07/22.
//
#include <iostream>
using namespace std;
#include "Quicksort.h"
int Quicksort::partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j){

        while (pivot >= arr[i])
            i++;
        while (pivot < arr[j])
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]); //move.h
    return j;
}

void Quicksort::quickSort(int arr[], int low, int high)
{
    if (low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void Quicksort::printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void Quicksort::driver(){
    int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6};
    int size = sizeof(arr) / sizeof(int);
    cout<<"Before Sorting"<<endl;
    printArray(arr, size);
    quickSort(arr, 0, size - 1);
    cout<<"After Sorting"<<endl;
    printArray(arr, size);
    info();
}

void Quicksort::info(){
    cout << AZUL << "O(n*log(n))\n"
                    "Peor caso: O(n^2)\n" << endl;
    cout << "procedimiento Recursivo, Pivot, opuestos al ordenamiento burbuja \n"
            "NO ES STABLE, in place para la entrada, solo necesita memoria extra para recursividad"<< endl;
    cout << "iTEMS a la iz son menores ITEMS a la derecha son mayores" << endl;
    cout << "Movemos el item al final de la lista \n"
            "para mejorar el algoritmo se recomienda mcentrarse en la eleccion del pivote\n"
            "usualmente se escoge el indice del medio" << endl;
    cout << ROJO << "[8,3,6,4,2,5,7,1]" << endl;
    cout << VERDE << " pivot 4 puntero IZQ 8 puntero DER 1" << endl;
    cout << "8<4? no cumple pasamos al puntero derec 1>4? no cumple hacemos swap" << endl;
    cout << AZUL <<"[1,3,6,4,2,5,7,8]"<< endl;
    cout << VERDE <<" corremos punteros 3<4? si. puntero izq se corre a 6.. 6<4 NO,\n"
            " pasamos al puntero der, 7>4 si, movemos 5>4 SI corremos puntero al 2\n"
            "2>4? no SWAP " << endl;
    cout << AZUL << "[1,3,2,4,6,5,7,8]" << endl;
    cout << VERDE << "[1,3,2,4] lad iz del vector [6,5,7,8] lado derecho" << endl;
    cout << "escogemeos de cada lado un pivote y repetimos el procesos" << endl;
}
