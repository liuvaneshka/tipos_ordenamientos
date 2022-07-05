//
// Created by liuvaneshka on 05/07/22.
//

#include "Menu.h"
#include "Sort.h"
#include "Shellsort.h"
#include "Radixsort.h"
#include "Quicksort.h"
#include "Mergesort.h"
#include "Heapsort.h"
#include "Treesort.h"

Menu::Menu(){}

Menu::~Menu(){}

void Menu::mostrar_menu(){
    for(int i = 0; i < CANT_OPCIONES; i++)
        cout << AMARILLO << i+1 << ". " << OPCIONES[i]  << endl;
}

void Menu::elegir_opcion(){
    string op;
    cout << VIOLETA << "\n\t\tIngresar opcion: ";
    cin >> op;
    this->opcion = atoi(op.c_str());
}

bool Menu::selector_menu(){
    bool estado;

    switch (this->opcion){

        case 1:
            cout << VERDE << "CASO_1 sort" << endl;
            Sort so;
            so.driver();
            estado = true;
            break;

        case 2:
            cout << VERDE << "CASO_2 shellsort" << endl;
            Shellsort sh;
            sh.driver();
            estado = true;
            break;

        case 3:
            cout << VERDE << "CASO_3 radixsort" << endl;
            Radixsort ra;
            ra.driver();
            estado = true;
            break;

        case 4:
            cout << VERDE << "CASO_4 QuickSORT DIVIDE Y VENCERAS" << endl;
            Quicksort qs;
            qs.driver();
            estado = true;
            break;

        case 5:
            cout << VERDE << "CASO_5 Mergesort DIVIDE Y VENCERAS" << endl;
            Mergesort me;
            me.driver();
            estado = true;
            break;

        case 6:
            cout << VERDE << "CASO_6 Heapsort" << endl;
            Heapsort hs;
            hs.driver();
            estado = true;
            break;

        case 7:
            cout << VERDE << "CASO_7 Treesort" << endl;
            Treesort ts;
            ts.driver();
            estado = true;
            break;

        case 8:
            cout << ROJO << "Cordial despedida" << endl;
            estado = false;
            break;

        default:
            cout << ROJO  << "OPCION_INVALIDA" << endl;
            estado = true;

    }

    return estado;
}
