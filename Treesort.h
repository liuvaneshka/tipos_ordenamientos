//
// Created by liuvaneshka on 05/07/22.
//

#ifndef SORT_TREESORT_H
#define SORT_TREESORT_H
#include "constanes.h"
#include <iostream>
using namespace std;


class Treesort {
public:
    struct Node
    {
        int key;
        struct Node *left, *right;
    };

// A utility function to create a new BST Node
    struct Node *newNode(int item)
    {
        struct Node *temp = new Node;
        temp->key = item;
        temp->left = temp->right = NULL;
        return temp;
    }

    void storeSorted(Node *root, int arr[], int &i)
    {
        if (root != NULL)
        {
            storeSorted(root->left, arr, i);
            arr[i++] = root->key;
            storeSorted(root->right, arr, i);
        }
    }

/* A utility function to insert a new
   Node with given key in BST */
    Node* insert(Node* node, int key)
    {
        /* If the tree is empty, return a new Node */
        if (node == NULL) return newNode(key);

        /* Otherwise, recur down the tree */
        if (key < node->key)
            node->left  = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);

        /* return the (unchanged) Node pointer */
        return node;
    }

// This function sorts arr[0..n-1] using Tree Sort
    void treeSort(int arr[], int n)
    {
        struct Node *root = NULL;

        // Construct the BST
        root = insert(root, arr[0]);
        for (int i=1; i<n; i++)
            root = insert(root, arr[i]);

        // Store inorder traversal of the BST
        // in arr[]
        int i = 0;
        storeSorted(root, arr, i);
    }
    void driver(){
        //create input array
        int arr[] = {5, 4, 7, 2, 11};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout << "\noriginal" << endl;
        for (int i=0; i<n; i++)
            cout << arr[i] << " ";
        treeSort(arr, n);
        cout << "Resultado" << endl;
        for (int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << endl;
        info();
    }
    void info(){
        cout << AZUL << "Complejidad del In orden: O(n)\n"
                        "Agregar “n” nodos:\n"
                        "Mejor caso: O(n*log(n))\n"
                        "Peor caso:O(n2)" << endl;
        cout << AZUL << " crea un árbol de búsqueda binario y después \n"
                        " realiza un recorrido inorden en el árbol de\n"
                        " búsqueda binario creado para obtener los \n"
                        "elementos en ordenados de forma creciente" << endl;
    }
};


#endif //SORT_TREESORT_H
