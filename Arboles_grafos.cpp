//
// Created by liuvaneshka on 07/07/22.
//
#include <iostream>
#include "Arboles_grafos.h"
using namespace std;

void Arboles_grafos::bigO(){
    cout << AZUL << "O(1) < O(log(n) < O(n) < O(n^2) < O(2^n) < O(n!) \n " << endl;
    cout << ROJO << "HORRILBLE" << "O(n^2) < O(2^n) < O(n!)" << endl;
    cout << AMARILLO << "FAIR O(n) " << " BAD  < O(nlog(n)" << endl;
    cout << VERDE << "GOOD  " << "O(1) < O(log(n)" << endl;
}

void Arboles_grafos::mergeVSsort(){
    cout << AZUL << "\t\tPARTICION DE ELEMENTOS " << endl;
    cout << AMARILLO << "Quick sort: La division de un arreglo de elementos es en base a su radio\n"
                        "Mergesort: el arreglo es dividio en dos mitades \n" << endl;
    cout << AZUL << "\t\tCOMPLEJIDAD PEOR CASO" << endl;
    cout << AMARILLO << "Quicksort O(n^2) muchas comparaciones \n"
                        "Mergesort O(nlogn) \n" << endl;

    cout << AZUL << "\t\tMEJOR APLICACION:" << endl;
    cout << AMARILLO << "Quicksort: Pequenos arreglos \n"
                        "Mergesort: cualquier tamano\n " << endl;

    cout << AZUL << "\t\tVELOCIDAD DE EJECUCION:" << endl;
    cout << AMARILLO << "Quicksort: Es masrapido q otros algoritmos de pequenos sets de datos selection sort \n"
                        "Mergesort: v ctte sin importar el tamanio \n " << endl;

    cout << AZUL << "\t\tESPACIO ADICIONAL DE ALAMACENAMIENTO" << endl;
    cout << AMARILLO << "quicksort: menor usa INPLACE\n"
                        "mergesort: mas requiere arreglos auxiliares not inplace \n " << endl;

    cout << AZUL << "\t\tEFICIENCIA:" << endl;
    cout << AMARILLO << "Quicksort: ineficiente para arreglos gdes\n"
                        "mergesort: mas eficiente\n" << endl;

    cout << AZUL << "\t\t ESTABILIDAD" << endl;
    cout << AMARILLO << "Quicksort: NO ESTABLE \n"
                        "mergesort: Estable \n " << endl;

    cout << AZUL << "\t\t MEJOR PARA" << endl;
    cout << AMARILLO << "quicksort: arreglos \n"
                        "mergesort: listas enlazadas " << endl;

    cout << AZUL << "\t\tREFERENCIA LOCAL" << endl;
    cout << AMARILLO << "quicksort: buena, mas cache y es mas rapido, memoria virtual \n"
                        "mergsort: mala \n " << endl;

    cout << AZUL << "\t\t METODO DE ORDENAMIENTO" << endl;
    cout << AMARILLO << "quicksort: ordenamiento interno, la data es ordenda en memoria principa\n"
                        "mergesort: ordenamiento externo necesita memoria auxiliar para su ordenamientpo\n " << endl;
}

void Arboles_grafos::arboles(){
    cout << AZUL << " ÁRBOLES\n"
                    "\n"
                    "Un árbol es una colección de elementos, llamados nodos, uno de los cuales se distingue con el nombre de raíz.\n"
                    "Si existe camino de un nodo x a un nodo y, entonces se dice que x es un ancestro de y, que y es un descendiente de x. \n"
                    "Un subárbol de un árbol es un nodo del árbol junto con todos sus descendientes. \n"
                    "La profundidad de un nodo es la longitud del camino único de la raíz al nodo.\n"
                    "El grado de un nodo es el número de hijos que tiene.\n"
                    "La altura de un árbol es la distancia desde la raíz hasta la hoja más lejana -> log2(n), con n la cantidad de nodos.\n"
                    "Un árbol es completo si todas las hojas están a igual distancia de la raíz.\n"
                    "Un árbol es balanceado si en cada nodo, las alturas de los subárboles no difieren en más de un nivel. \n"
                    "\n"
                    "Un árbol binario es un árbol cuyos nodos tienen a lo sumo dos hijos o bien es un árbol nulo.\n"
                    "Recorridos en profundidad:\n"
                    "Recorrido en preorden: se realiza cierta acción sobre el nodo actual, luego se trata el subárbol izquierdo y cuando se haya concluido, el subárbol derecho.\n"
                    "Recorrido en postorden: se trata primero el subárbol izquierdo, después el derecho y por último el nodo actual.\n"
                    "Recorrido en inorden: se trata primero el subárbol izquierdo, después el nodo actual y por último el subárbol derecho. \n"
                    "Recorridos en amplitud:\n"
                    "Recorrido por niveles: el recorrido se realiza en orden por los distintos niveles del árbol.\n"
                    "\n"
                    "Un ABB es un árbol binario de búsqueda. Los descendientes a la izquierda de todo nodo x son menores que x, y los descendientes a la derecha son mayores que x. El recorrido inorden dará los valores de clave ordenados de menor a mayor.\n"
                    "\n"
                    "Borrado (O(h) + O(1))\n"
                    "CASO 1: Para borrar un nodo sin hijos o nodo hoja simplemente se borra y se establece a nulo el apuntador de su padre.\n"
                    "CASO 2: Para borrar un nodo con un subárbol hijo se borra el nodo y el subárbol pasa a ocupar su lugar.\n"
                    "CASO 3: Para borrar un nodo con dos subárboles hijo, hay que tomar el hijo derecho del Nodo que queremos eliminar y recorrerlo hasta el hijo más a la izquierda. Reemplazamos el valor del nodo que queremos eliminar por el nodo que encontramos.\n"
                    "El nodo que encontramos por ser el más a la izquierda es imposible que tenga nodos a su izquierda, pero si es posible que tenga un subárbol a la derecha. Eliminamos este nodo de acuerdo a caso 1 o caso 2." << endl;

}

void Arboles_grafos::Avl_multi_b_bplus(){
    cout << ROJO << "\t\t ARBOL AVL Olog(n)" << endl;
    cout << AZUL << "es un tipo de arbol binario autobalanceable\n"
                    "la diferencia entre las alturas del arbol iz u derecho\n"
                    "no puede ser mas de uno por todos los nodos\n"
                    "la mayoria de las operaciones de un abb son de O(h) siendo h  altura \n"
                    "si nos aseguamos de que la altura del arbol permannezca O(logn) \n"
                    "para cada insercion y eliminacion, podemos determinar un limite superior de O(logn)\n"
                    "donde n es el numero de nodos en el arbol\n\n"
                    "FACTOR DE BALANCEO, es un atributo que se le agrega a cada nodo,\n"
                    "factor balnceo: altura iz - altura derecha (RES + der - izq)\n"
                    "Representa la diferencia de alturas entre arbol iz y der\n "
                    "VALORES permitidos -1 0 1\n" << endl;

}

void Arboles_grafos::cmVSmst(){
    cout << AZUL << " Considerando que estas haciendo una app de deli, si quieres que se entregue\n"
                    "comida a todos los clientes cubriendo una distancia optima, en tiempo min\n"
                    "o con menos consumo de energia necesitarias un MST arbol de expansion min\n"
                    "\n por otro lado si quieres ir directamente a una locacion A-B necesitarias\n"
                    "CAMINO MINIMO, ya que no garantiza cubrir todos los vertices\n" << endl;

}

void Arboles_grafos::DijkstraVSFloyd(){
    cout << ROJO << "\t\t DIJKSTRA: " << endl;
    cout << AMARILLO << "COMPLEJIDAD: O(E+vlogV) " << endl;
    cout << AZUL << " Dado un nodo o vertice encuentra el camino minimo entre ese y el resto de los nodos\n"
                    "puede fallar en dar una correcta solucion a los grafos con peso negativo\n"
                    "aplicaciones: arreglos, min heaps, fibonacci heaps \n"
                    "SE PUEDE USAR oara grafos dirigidos y no dirigidos\n"
                    "no funciona para grafos sin peso, puede trabajar con ciclos \n"<< endl;
    cout << ROJO << "\t\t FLOYD-WARSHALL: " << endl;
    cout << AMARILLO << "COMPLEJIDAD: O(v^3) " << endl;
    cout << AZUL << " Camino mas corto entre todos los pares de vertices, permite aristas E negativas"
                    "funciona con tabla o matriz de adyacencia \n" << endl;
}

void Arboles_grafos::primVSkruskal(){
    cout << ROJO << "\t\t PRIM: " << endl;
    cout << AMARILLO << "COMPLEJIDAD: O(V^2)  " << endl;
    cout << AZUL << "Para grafos conexos. no dirigidos, cuyas aristas estan etiquetadas\n"
                    "1. crear una lista de todos vacia para ir agregando todos los vertices,\n"
                    "inicializar todos los valores de las llaves en infinito, asignar el valor 0\n"
                    "al primer vertice para q se elija primero,\n"
                    "2. escoger un vertice q no este en la lista mst, y tenga el valor min\n"
                    "incluirlo en la lista mst, actualizar el valor de los vertices adyacentes\n"<< endl;
    cout << VIOLETA << "Es mejor usar prim cuando se tiene un grafo con muchas aristas, kruskal creara una solucion desde"
                       "la asrista mas barata agregand asi la sig mas barata que no cree un ciclo\n"
                       "prim creara una solucion de un vertice random agreganfo el vertrice mas barato, que no este enla solucuon peor si conectado para la arista mas barata\n" << endl;
    cout << ROJO << "\t\t KRUSKAL: " << endl;
    cout << AMARILLO << "COMPLEJIDAD: O(E.log(E)) " << endl;
    cout << AZUL << "Puede trabajar con un grafo conectado como no conectado\n"
                    "SIN CICLOS,\n"
                    "1. ordenar todos las aristas en orden no decresiecte por su peso\n"
                    "2. escoger la arista mas hasta es emomento, sino se forma un ciclo se incluye la arista\n"
                    "repetir el paso 2 hasta v-1 aristas esten en el mst  \n"<< endl;
}

void Arboles_grafos::greedyVSDynamic(){
    cout << ROJO << "\t\t GREEDY voraz: (Dijkstra PRIM KRUSKal) " << endl;
    cout << AZUL << " Mas eficaz en memoria, ya que no revisa decisiones anteriores\n"
                    "mas rapido\n"
                    "se basa en cualquier decision que parezca mejor en el momento\n" << endl;
    cout << ROJO << "\t\t Dynamic programming (Floyd) " << endl;
    cout << AZUL << " requiere tabla, e smas lento, recursivo, siempre da la soluccion correcta\n" << endl;
}

void Arboles_grafos::hash(){
    cout << AZUL << "\tHASH CERRADO: Todos los elementos se guardan en la misma tabla. De haber una colisión, se resuelve con alguno de los siguientes métodos:\n"
                    "\tOPEN ADDRESING: Si se produce una colisión se busca una nueva posición tomando alguna nueva función que prueba en primer lugar con el valor 1, luego con el 2, etc. Si h(k) está ocupada prueba con h(k) + p(1), y si también lo está intenta con h(k) + p(2), etc, donde p es una nueva función.  Al finalizar siempre se aplica la función módulo. \n"
                    "Linear probing (Sondeo Lineal): Se define la función p como p(i) = i por lo tanto, lo que hace es ir verificando las posiciones siguientes a la que la función de hash indica. Este procedimiento se repite hasta alcanzar el final de la tabla, en cuyo caso se comienza desde el principio hasta encontrar la primera posición libre.\n"
                    "\t QUADRATIC PROBING: Una mejora es tomar la función p como cuadrática. Los datos quedan de forma más dispersa y no se agrupan en ciertas zonas.\n"
                    "\t DOUBLE HASHING: Se usan 2 funciones de hash para obtener la posición. La secuencia hasta encontrar una posición vacía es la siguiente: p = h(k) + i · h2 (k). Si se produce una colisión se suma una nueva función de dispersión (i = 1), en el caso de seguir colisionando, se sumará el doble de dicha función (i = 2), etc. Se debe finalizar tomando el módulo con el tamaño de la tabla.  " << endl;
    cout << ROJO << "\n"
                    "\t HAHS ABIERTO: Cada posición de la tabla en realidad será un puntero a una lista enlazada con las claves. \n"
                    "\t BUCKET ADDRESSING: Varios elementos se almacenan en una misma posición de la tabla. Se utiliza una estructura de matriz, luego, cada posición es un bloque que contiene varios elementos por lo que se las llama “buckets”. " << endl;

}

void Arboles_grafos::priority_queue() {
    cout << AZUL << "es un tipo de dato abstracto similar a una cola en la que los elementos tienen adicionalmente, una prioridad asignada. \n"
                    " En una cola de prioridades un elemento con mayor prioridad será desencolado antes que un elemento de menor prioridad.\n"
                    "Si dos elementos tienen la misma prioridad, se desencolarán siguiendo el orden de cola.\n\n"
                    "USOS HEAPSORT, dijkstra y prim , se elimina el mas grande\n"
                    "cola normal fifo en cola de prioridad hay prioridad O(nlogn)\n\n"
                    "Las colas d prioridad se construyen encima del max hep y usa una arrgelo como estructura interna,\n"
                    " el heap es una estructura de arbol(guradado en forma ordenada dentro de un arreglo)\n"
                    "Binary heap es el metodo mas eficiente para implementar la cola de prioridad" << endl;
}
