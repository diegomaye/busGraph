//
//  ABBLineas.h
//  busGraph
//
//  Created by diegomaye on 7/17/19.
//  Copyright © 2019 Diego Rodrigo Pablo. All rights reserved.
//  Tipo Arbol Binario de Busqueda
//

#ifndef ABBLineas_h
#define ABBLineas_h

#include <stdio.h>

typedef struct nodo_linea{
    int nro;
    nodo_linea * hizq;
    nodo_linea * hder;
} NodoLinea;

typedef NodoLinea * ABBLineas;

void crearABBLineas(ABBLineas &arbolLineas);

#endif /* ABBLineas_h */
