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

struct nodo{
    int nro;
    struct nodo *izq, *der;
};

typedef struct nodo * ABBLineas;

#endif /* ABBLineas_h */
