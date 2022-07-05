//
// Created by liuvaneshka on 05/07/22.
//

#ifndef SORT_MENU_H
#define SORT_MENU_H
#include <iostream>
#include <string>
#include <iostream>
#include "constanes.h"
#include "Sort.h"
#include "Shellsort.h"



using namespace std;

class Menu {

private:

    int opcion;


public:

    //PRE: -
    //POST: Construye un Menu.
    Menu();

    //PRE: -
    //POST: Destruye un Menu.
    ~Menu();

    //PRE: Menu debe ser un objeto válido.
    //POST: Impriem las opcines del Menu.
    void mostrar_menu();

    //PRE: Menu debe ser un objeto válido.
    //POST: Pide al usuario la opcion que desea ejecutar del Menu.
    void elegir_opcion();

    //PRE: Menu debe ser un objeto válido.
    //POST: Dependiendo de la opcion ingresada por el usuario, se ejecuta la acción correspondiente.
    bool selector_menu();
};

#endif //SORT_MENU_H
