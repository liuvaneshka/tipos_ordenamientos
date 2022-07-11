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
                    "Caso promedio: O(n.log(n)) \n" << endl;
    cout << " IN PLACE, NO-ESTABLE \n"
            "Es un Arbol Binario ordenado  utiliza el max heap (padre> hijo)\n"
            "Consiste en alamacenar todos los elementos en un monticulo \n"
            "y luego extraer el nodo como raiz (Se espera que el de mayor grado) \n"
            "en sucesivas iteraciones\n"
            "el algoritmo despues de cada extraccion recoloco en la raiz  la ultima hoja por la derecha del ultil" << endl;
    cout << "\n HEAPIFY el el proceso de reformar un arbol binario en un monticulo de data \n"
            "un monticulo o heap seimpre debe ser un arbol binario completo\n"
            "empezando con un arbol binario , podemos modificarlo llamando a la funcion \n"
            "heapify en todos los elementos NO HOJAS, y usa recursion \n\n " << endl;
    cout << "1. se construye un arbol con el arreglo dado\n"
            "una vez ya construido el heao los transformamos en un MAXHEAP\n"
            "2. Para transformr el heap en max heap, el nodo padre debe ser mayor\n"
            "o igual que nodo hijo, HACEMOS UN SWAP\n"
            "si el nodo al q le hiciso swap sigue siendo menor q el hijo le aplicamos otro swap\n"
            "3. luego eliminamos el elemento raiz o padre el mas grande, del max heap\n"
            "poniendo ese en el dfinal del arreglo, y luego aplicarle HEAPIFY al arbol o heap o montiiculo\n"
            "volver a hacer el max heap y asi sucesivamente"<< endl;
    /*
     * Priority Queues: Priority queues can be efficiently implemented using Binary Heap because it supports insert(),
     * delete() and extractmax(), decreaseKey() operations in O(logn) time. Binomoial Heap and Fibonacci Heap are
     * variations of Binary Heap. These variations perform union also in O(logn) time which is a O(n) operation in
     * Binary Heap. Heap Implemented priority queues are used in Graph algorithms like Prim’s Algorithm and Dijkstra’s algorithm.

        Order statistics: The Heap data structure can be used to efficiently find the kth smallest (or largest) element in an
     array. See method 4 and 6 of this post for details.
     */
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