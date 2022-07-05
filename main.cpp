//
// Created by liuvaneshka on 04/07/22.
//

#include "Menu.h"


int main() {

    Menu menu;
    menu.mostrar_menu();
    menu.elegir_opcion();

    while (menu.selector_menu()) {
        menu.mostrar_menu();
        menu.elegir_opcion();
    }

    return 0;
}