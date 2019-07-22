//
//  ABBLineas.cpp
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Tipo Arbol Binario de Busqueda
//

#include "ABBLineas.h"

void crearABBLineas(ABBLineas &arbolLineas){
    arbolLineas = NULL;
}

void insertarLinea(ABBLineas &arbol, Linea linea) {
    if (arbol == NULL) {
        arbol = new NodoLinea;
        arbol-> info = &linea;
        arbol-> hizq = NULL;
        arbol-> hder = NULL;
        
    }
    else {
        String linea1;
        String linea2;
        strcrear(linea1);
        strcrear(linea2);
        DarCodigo(linea, linea1);
        DarCodigo(linea, linea2);
        if (strmen(linea1, linea2))
            insertarLinea(arbol->hizq, linea);
        else
            insertarLinea(arbol->hder, linea);
    }
}

void cargarDatosArbolLineas(ABBLineas &arbolLineas, String parada, int ciudad){
    Linea linea;
    cargarDatosLinea(linea, parada, ciudad);
    insertarLinea(arbolLineas, linea);
}
