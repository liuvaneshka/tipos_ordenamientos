//
// Created by liuvaneshka on 05/07/22.
//
#include <iostream>
#include "Radixsort.h"
#include "constanes.h"
using namespace std;


int Radixsort::getMax(int arr[], int n){
    int mx = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > mx)
            mx = arr[i];
    }

    return mx;
}


void Radixsort::countSort(int arr[], int n, int exp){
    int output[n]; // output array
    int i, count[10] = { 0 };

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
    print(arr, n);

}


void Radixsort::radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10){
        countSort(arr, n, exp);
        cout << "EXP: " << exp << endl;
    }
}

void Radixsort::print(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Radixsort::driver(){
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    radixsort(arr, n);
    print(arr, n);
    info();
}

void Radixsort::info(){

    cout << AZUL << "O(nw), N es el numero de llaves y W la longitu de la llave.\n No muy recomendado porque hace muchas copias." << endl;
    cout << "SOLO SE USA PARA ARREGLAR NUMEROS" << endl;
    cout << "Es un algoritmo de ordenacion no comparativo" << endl;
    cout << "Data final del 1800 se usaba para las maqunas tabuladoras, para censo" << endl;
    cout << "Se uso en maquinas de tipo tareta perforada, por su uso bin" << endl;
    cout << "Hoy en dia se aplic para las colecciones de cadenas y enteros binarios, lo que la hace 50"
            "% o 3 veces mas rapida" << endl;
}