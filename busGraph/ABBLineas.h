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
#include "Linea.h"

typedef struct nodo_linea{
    Linea info;
    nodo_linea * hizq;
    nodo_linea * hder;
} NodoLinea;

typedef NodoLinea * ABBLineas;

void MakeABB(ABBLineas &arbolLineas);

void insertABB(ABBLineas &arbolLineas, Linea linea);

Boolean MemberABB(ABBLineas arbolLineas,String codigo);

void ListarABB(ABBLineas arbolLineas);

void cargarDatosArbolLineas(ABBLineas &arbolLineas, String parada, int ciudad);

#endif /* ABBLineas_h */
